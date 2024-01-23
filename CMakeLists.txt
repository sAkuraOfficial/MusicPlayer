cmake_minimum_required(VERSION 3.10)

project(MusicPlayer)

add_subdirectory(externalLib/hello_imgui)

hello_imgui_add_app(MusicPlayer MusicPlayer.cpp MusicPlayer.hpp)

install(FILES ./assets/微软雅黑.ttf DESTINATION ${CMAKE_BINARY_DIR}/assets)