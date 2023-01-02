/*
** raylib-render-core, 2022
** Camera.cpp by 0xMemoryGrinder
*/


#include "modules/Camera.hpp"
#include "rlgl.h"
#include "config.h"
#include "raylib.h"
#include "raymath.h"

polymorph::engine::raylib::Camera::Camera() : _camera({0})
{
    SetCameraMode(_camera, CAMERA_ORBITAL);
    _camera.projection = CAMERA_PERSPECTIVE;
}

void polymorph::engine::raylib::Camera::setPosition(float x, float y, float z)
{
    _camera.position = {x, y, z};
}

void polymorph::engine::raylib::Camera::setTarget(float x, float y, float z)
{
    _camera.target = {x, y, z};
}

void polymorph::engine::raylib::Camera::setUp(float x, float y, float z)
{
    _camera.up = {x, y, z};
}

void polymorph::engine::raylib::Camera::setFOV(float fov)
{
    _camera.fovy = fov;
}

void polymorph::engine::raylib::Camera::begin3DMode()
{
    rlDrawRenderBatchActive();      // Update and draw internal render batch

    rlMatrixMode(RL_PROJECTION);    // Switch to projection matrix
    rlPushMatrix();                 // Save previous matrix, which contains the settings for the 2d ortho projection
    rlLoadIdentity();               // Reset current matrix (projection)

    float aspect = (float)16/(float)9;

    // NOTE: zNear and zFar values are important when computing depth buffer values
    if (_camera.projection == CAMERA_PERSPECTIVE)
    {
        // Setup perspective projection
        double top = RL_CULL_DISTANCE_NEAR*tan(_camera.fovy*0.5*DEG2RAD);
        double right = top*aspect;

        rlFrustum(-right, right, -top, top, RL_CULL_DISTANCE_NEAR, 10000);
    }
    else if (_camera.projection == CAMERA_ORTHOGRAPHIC)
    {
        // Setup orthographic projection
        double top = _camera.fovy/2.0;
        double right = top*aspect;

        rlOrtho(-right, right, -top,top, RL_CULL_DISTANCE_NEAR, 10000);
    }

    rlMatrixMode(RL_MODELVIEW);     // Switch back to modelview matrix
    rlLoadIdentity();               // Reset current matrix (modelview)

    // Setup Camera view
    Matrix matView = MatrixLookAt(_camera.position, _camera.target, _camera.up);
    rlMultMatrixf(MatrixToFloat(matView));      // Multiply modelview matrix by view matrix (camera)

    rlEnableDepthTest();            // Enable DEPTH_TEST for 3D
}

void polymorph::engine::raylib::Camera::end3DMode()
{
    EndMode3D();
}

void polymorph::engine::raylib::Camera::move(float x, float y, float z)
{
    _camera.position = { _camera.position.x + x,
                         _camera.position.y + y,
                         _camera.position.z + z };
}

EXPORT_MODULE polymorph::graphical::ICamera *createCamera()
{
    return new polymorph::engine::raylib::Camera();
}
