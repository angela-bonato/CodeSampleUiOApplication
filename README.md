## Code sample for UiO PhD application

This code was originally written as part of the Numerical Simulation Laboratory, a course I took as part of my Master degree in Physics at the University of Milan. I then adapted it to use it as code sample for a PhD application at the University of Oslo. 

Explain the exercise here. 

The repository is organized as follows:
- the RandomGenerator folder contains a version of the random number generator described in a 1987 paper by Percus and Kalos and was not written by me;
- Exercise.ipynb is a Python Jupyter Notebook I used to explain the exercise, plot and comment my results;
- Communicating and NotCommunicating folders contain the results of the C++ analysis which are plotted in the Notebook;
- files main.cpp, lib.h, lib.cpp, city.h, city.cpp, parallel.h, parallel.cpp, path.h, parallel.cpp contain the C++ source code I wrote to produce the plotted results, which can be compiled and run using the given Makefile;
- cap_prov_ita.dat is the file with the input data.