#!/bin/bash

g++ -c ../../MyLib/number.cpp -o my_lib.o
ar rcs num_lib.a my_lib.o
g++ -fPIC -c ../../MyLib/vector.cpp -o vector_lib.o
g++ -shared -o vector.so my_lib.o vector_lib.o
g++ main.cpp -L. vector.so && ./a.out