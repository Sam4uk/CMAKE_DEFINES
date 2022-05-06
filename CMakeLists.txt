cmake_minimum_required(VERSION 3.12)

project(CMAKE_DEFINES
  VERSION 1.2.3.4
  DESCRIPTION "This is a test program."
  HOMEPAGE_URL "URL"
  LANGUAGES CXX C
)
configure_file(${PROJECT_SOURCE_DIR}/cmake.info.in
  ${PROJECT_SOURCE_DIR}/define.hpp
  @ONLY)