cmake_minimum_required(VERSION 3.13)
project(LLDBVisualization)

set(CMAKE_CXX_STANDARD 14)

add_executable(check_libstdcxx main.cpp)

# set standard library
if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
    target_compile_options(check_libstdcxx PRIVATE -stdlib=libstdc++)
    set_target_properties(check_libstdcxx PROPERTIES LINK_FLAGS -stdlib=libstdc++)

    add_executable(check_libcxx main.cpp)
    target_compile_options(check_libcxx PRIVATE -stdlib=libc++)
    set_target_properties(check_libcxx PROPERTIES LINK_FLAGS -stdlib=libc++)
endif ()