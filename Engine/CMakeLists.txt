set(ENGINE_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/graphics/Renderer.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/graphics/Window.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Engine.cpp
    ${CMAKE_SOURCE_DIR}/lib/glad.c
)

add_library(Engine ${ENGINE_SOURCES})

target_include_directories(Engine PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_SOURCE_DIR}/lib
)
