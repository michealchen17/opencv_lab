project(opencv_lab)
cmake_minimum_required(VERSION 2.8)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets)
find_package(Qt5Core)
find_package(Qt5Gui)

find_package(OpenCV REQUIRED)

message(STATUS "OpenCV library status:")
message(STATUS "    version: ${OpenCV_VERSION}")
message(STATUS "    libraries: ${OpenCV_LIBS}")
message(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})


target_link_libraries(${PROJECT_NAME}

    Qt5::Widgets
    Qt5::Core
    Qt5::Gui
    ${OpenCV_LIBS})
