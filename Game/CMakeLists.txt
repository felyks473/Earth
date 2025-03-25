add_executable(Earth src/main.cpp src/Game.cpp)

target_include_directories(Earth PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/Engine/include>
)

target_link_libraries(Earth PRIVATE Engine OpenGL::GL glfw)
