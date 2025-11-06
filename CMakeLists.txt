# CMakeList.txt : CMake project for BomberMan, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("BomberManClient" LANGUAGES C CXX)

list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/libs/SDL3-3.3.0/")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/libs/SDL3_image-3.2.4/")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/libs/SDL3_mixer-3.1.0/")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/libs/glm-1.0.1-VC/")

find_package(SDL3 REQUIRED)
find_package(SDL3_image REQUIRED CONFIG)
find_package(SDL3_mixer REQUIRED CONFIG)
find_package(glm REQUIRED CONFIG)

# Add source to this project's executable.
add_executable (BomberManClient
    "src/entrypoint/entrypoint.cpp"
    "src/states/sdl_state.h"
    "src/states/sdl_state.cpp"
    "src/core/asset_manager.h"
    "src/core/asset_manager.cpp"
    "src/core/timer.h"
    "src/core/animation.h"
    "src/entities/map_tile.h"
    "src/entities/spoil.h"
    "src/map/map_manager.h"
    "src/map/map_manager.cpp"
    "src/states/game_state.h"
    "src/states/game_state.cpp"
)

target_include_directories(BomberManClient PUBLIC
    ${CMAKE_SOURCE_DIR}/libs/json/nlohmann
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)

# TODO: Add tests and install targets if needed.
target_link_libraries(BomberManClient PRIVATE SDL3::SDL3 SDL3_image::SDL3_image SDL3_mixer::SDL3_mixer glm::glm)

# This section handles copying required files to the output directory after a build.

add_custom_command(
    TARGET BomberManClient POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy_directory
    ${CMAKE_CURRENT_SOURCE_DIR}/assets $<TARGET_FILE_DIR:BomberManClient>/assets
)

if(WIN32) # These commands are only necessary on Windows for DLLs.
    add_custom_command(
        TARGET BomberManClient POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E copy $<TARGET_FILE:SDL3::SDL3> $<TARGET_FILE_DIR:BomberManClient>
        VERBATIM
    )
    add_custom_command(
        TARGET BomberManClient POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E copy $<TARGET_FILE:SDL3_image::SDL3_image> $<TARGET_FILE_DIR:BomberManClient>
        VERBATIM
    )
    add_custom_command(
        TARGET BomberManClient POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E copy $<TARGET_FILE:SDL3_mixer::SDL3_mixer> $<TARGET_FILE_DIR:BomberManClient>
        VERBATIM
    )
endif()

# ====================================================================
# INSTALLATION RULES
# Defines what to copy when the INSTALL target is built.
# ====================================================================

# 1. Install the main executable file (BomberManClient.exe)
install(TARGETS BomberManClient
    RUNTIME DESTINATION BomberManClient  # Executables go into the 'bin' folder
)

# 2. Install required runtime DLLs
if(WIN32)
    install(FILES $<TARGET_FILE:SDL3::SDL3>
        DESTINATION BomberManClient
        COMPONENT Runtime
    )
    install(FILES $<TARGET_FILE:SDL3_image::SDL3_image>
        DESTINATION BomberManClient
        COMPONENT Runtime
    )
    install(FILES $<TARGET_FILE:SDL3_mixer::SDL3_mixer>
        DESTINATION BomberManClient
        COMPONENT Runtime
    )
endif()

# 3. Install the resources directory
set(RESOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/assets)
if(EXISTS ${RESOURCE_DIR})
    install(DIRECTORY ${RESOURCE_DIR}
        DESTINATION BomberManClient  # Install the 'resources' folder into the root of the install directory
    )
endif()
