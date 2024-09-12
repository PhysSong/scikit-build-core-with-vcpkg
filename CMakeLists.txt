cmake_minimum_required(VERSION 3.22)

list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

include(VcpkgHelper)
ensure_vcpkg()
use_static_with_dynamic_runtime_vcpkg()

if(NOT SKBUILD)
	list(APPEND VCPKG_MANIFEST_FEATURES "python")
endif()

project(sk_vcpkg_example LANGUAGES C CXX)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

if(MSVC)
	add_compile_options(/utf-8)
endif()

find_package(Python3 REQUIRED COMPONENTS Interpreter Development.Module)
find_package(pybind11 REQUIRED)
add_subdirectory(python/native)
