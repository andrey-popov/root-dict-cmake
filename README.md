# ROOT dictionaries with CMake

This is a demonstration of producing and reading of [ROOT](https://root.cern.ch) files with custom objects.
An `std::vector` of objects of a user-defined class is written to or read from a ROOT `TTree`.
The project is built using CMake.
The demonstration is largely based on [this example](https://root-forum.cern.ch/t/shared-object-with-cmake/18645/3).

Building and running the code requires a compiler with support of C++14 standard, CMake of version 2.8 or newer, and ROOT 6.
To build and run the code, execute the following commands:
```sh
cd build
cmake ..
make
cd ..

bin/write
bin/read
```
