cmake_minimum_required( VERSION 2.8.11 )
project( qt_ui )
set( CMAKE_INCLUDE_CURRENT_DIR ON )
set( CMAKE_AUTOMOC ON )
set( CMAKE_AUTOUIC ON )
find_package( Qt5Widgets )
add_executable(hello_qt2 WIN32 main.cpp mainwindow.cpp mainwindow.h mainwindow.ui)
target_link_libraries( hello_qt2 Qt5::Widgets )
