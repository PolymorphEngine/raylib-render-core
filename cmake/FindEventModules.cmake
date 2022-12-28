if(NOT TARGET event-modules)
    include(FetchContent)

    FetchContent_Declare(
            event-modules
            GIT_REPOSITORY https://github.com/PolymorphEngine/event-modules.git
            GIT_TAG feature/firstVersion
    )

    FetchContent_MakeAvailable(event-modules)
endif()