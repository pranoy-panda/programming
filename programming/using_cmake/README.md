# cmake and make : Automating the compilation process
In a moderate to large project, there can be hundreds of dependencies for the main.cpp program. Traditionally, programmers used to generate the object files for each of the dependencies and then subsequently link them to the object file of the main.cpp program. 

Doing the above is an extremely tedious job. So, people came up with "build system"(i.e. a software tool  designed to automate the process of program compilation) and thus "make" tool was invented.

"Make" tool takes Makefiles as input and then builds the target executable.

But, writing Makefile is also a tedious job, so programmers/ computer scientists came up with a tool called "cmake" to generate the Makefiles. Therefore, cmake is also called build system generator because ultimatly it is the "make" tool and not the "cmake" tool that generates the executable.

## Using cmake 

``` bash
$ mkdir build
$ cd build
$ cmake ..
$ make
```
