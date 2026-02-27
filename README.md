## Code sample for UiO PhD application

This code was originally written as part of the Numerical Simulation Laboratory, a course I took during my Master's degree in Physics at the University of Milan. I have now adapted it to use it as code sample for a PhD application at the University of Oslo. 

The objective of this program is to solve the Travel Salesman Problem using a Genetic Algorithm, and the repository is organized as follows:
- the RandomGenerator folder contains a version of the random number generator described in a 1987 paper by Percus and Kalos, it was not written by me but I used it as an external library in my program;
- Results.ipynb is a Python Jupyter Notebook I used to explain the exercise, plot and comment my results;
- *.dat files contain the results of the C++ analysis that are plotted in the Notebook;
- *.cpp and *.h files contain the C++ source code I wrote to produce the plotted results, which can be compiled and ran using the given Makefile. In particular: main.cpp is the core program, city.h and city.cpp define the class used to model cities in the problem, path.h and path.cpp define the class used to model paths, lib.h and lib.cpp collect a series of general functions used to solve the problem.