cmake_minimum_required(VERSION 3.16)

project(ColorLines LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Quick REQUIRED)

set(SOURCES
    main.cpp
    gamefield.cpp
    gamecontroller.cpp
    )

set(HEADERS
    gamefield.h
    gamecontroller.h
    )

set(DISTFILES
    qml/qml.qrc
    .gitignore
    )

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} ${DISTFILES})

target_link_libraries(${PROJECT_NAME}
    Qt5::Core
    Qt5::Quick
    Qt5::Gui)
