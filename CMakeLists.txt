cmake_minimum_required(VERSION 3.16)
project(LLDBVisualization)

set(CMAKE_CXX_STANDARD 20)

set(LIST_OF_CHECKS test/check_basic_types.h test/check_smart_pointers.h test/check_sequence_containers.h test/check_associative_containers.h test/check_unordered_associative_containers.h test/check_container_adaptors.h test/check_custom_types.h test/check_iterator.h)
add_executable(check_libstdcxx main.cpp MyPoint.cpp ${LIST_OF_CHECKS})

# set standard library
if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "Clang")
    target_compile_options(check_libstdcxx PUBLIC -stdlib=libstdc++)
    set_target_properties(check_libstdcxx PROPERTIES LINK_FLAGS -stdlib=libstdc++)

    add_executable(check_libcxx main.cpp MyPoint.cpp ${LIST_OF_CHECKS})
    target_compile_options(check_libcxx PUBLIC -stdlib=libc++)
    set_target_properties(check_libcxx PROPERTIES LINK_FLAGS -stdlib=libc++)
endif ()
