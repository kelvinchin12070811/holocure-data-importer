# CMakeList.txt : CMake project for holocure-data-importer, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)
project(holocure-data-importer VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_INCLUDE_CURRENT_DIR on)

find_package(wxWidgets CONFIG REQUIRED)

set(PROJECT_SOURCES
    "MainApp.cpp"
    "Frames/MainFrame.cpp"
    "Frames/ExportDataFrame.cpp"
)

set(PROJECT_HEADERS
    "MainApp.hpp"
    "Frames/MainFrame.hpp"
    "Frames/ExportDataFrame.hpp"
)

if (WIN32)
    add_executable (${PROJECT_NAME} WIN32 ${PROJECT_SOURCES} ${PROJECT_HEADERS})
endif ()

if (CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  target_compile_options(${PROJECT_NAME} PRIVATE "/ZI")
  target_link_options(${PROJECT_NAME} PRIVATE "/SAFESEH:NO")
endif()


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE wx::core wx::base)

# TODO: Add tests and install targets if needed.
