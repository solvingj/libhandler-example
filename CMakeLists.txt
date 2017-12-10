project(libhandler_example)
cmake_minimum_required(VERSION 3.7)

include(conan_include.cmake)

add_executable(libhandler_example
	src/libhandler_example.c
)

target_link_libraries(libhandler_example
	CONAN_PKG::libhandler
)
