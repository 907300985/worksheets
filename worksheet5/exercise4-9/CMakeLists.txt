cmake_minimum_required( VERSION 2.8.11 )
project( qt_ui )
set( CMAKE_INCLUDE_CURRENT_DIR ON )
set( CMAKE_AUTOMOC ON ) 
set( CMAKE_AUTOUIC ON )
find_package( Qt5Widgets )
add_executable( hello_qt3 WIN32 hello_qt3.cpp mainwindow.h mainwindow.ui mainwindow.cpp edititemdialog.cpp edititemdialog.h edititemdialog.ui stockitem.cpp stockitem.h stockitemlistmodel.h stockitemlistmodel.cpp )
target_link_libraries( hello_qt3 Qt5::Widgets )

