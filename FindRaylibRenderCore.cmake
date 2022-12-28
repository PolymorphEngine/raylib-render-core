if(NOT TARGET raylib-render-core)
    include(FetchContent)

    FetchContent_Declare(
            raylib-render-core
            GIT_REPOSITORY https://github.com/PolymorphEngine/raylib-render-core.git
            GIT_TAG main
    )

    FetchContent_MakeAvailable(raylib-render-core)
    get_target_property(raylib-render-core-icls raylib-render-core INTERFACE_INCLUDE_DIRECTORIES)
endif()