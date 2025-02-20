cmake_minimum_required(VERSION 3.12)

project(cmake_defines 
  VERSION 0.0.0.1
  DESCRIPTION "CMAKE_DEFINES"
  HOMEPAGE_URL "https://github.com/Sam4uk/cmake_defines"
  LANGUAGES CXX C
)

file( WRITE ${PROJECT_BINARY_DIR}/.gitignore
[=====[
# CMAKE generated file: DO NOT EDIT!
*
*.*
]=====]
) 

configure_file(${PROJECT_SOURCE_DIR}/cmake.info.in
  ${PROJECT_SOURCE_DIR}/define.hpp
  @ONLY)

add_executable(${PROJECT_NAME}
main.cpp)