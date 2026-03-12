cmake_minimum_required(VERSION 3.10)

project(KBAssetEditor)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenGL REQUIRED)

add_executable(KBAssetEditor
    src/main.cpp
    src/renderer.cpp
    src/model.cpp
)

target_link_libraries(KBAssetEditor
    OpenGL::GL
)
