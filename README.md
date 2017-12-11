# libhandler example

This project just demonstrates the simple example from section two of the research paper featured here: 

https://www.microsoft.com/en-us/research/publication/implementing-algebraic-effects-c/

The github project for the reference implementation is here: 

https://github.com/koka-lang/libhandler

# Running this example

## Requirements
This example requires the following tools to be built and run:

-Python installed
-Conan package manager installed from PIP
-CMake
-Any C compiler that works with CMake

If these requirements prevent you from running this example, apologies.  Hopefully the library and example are trivial enough for you to use your preferred toolset. 

## Instructions
1. Clone this repository
1. Run cmake (run the following commands from the cloned directory):
	`mkdir build && cd build && cmake .. && cmake --build .`
1. Find and run the generated executable `libhandler-example` in the subdirectories

