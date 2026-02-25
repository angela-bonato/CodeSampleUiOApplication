#include <vector>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <fstream>
#include <numeric>
#include "city.h"
#include "path.h"
#include "RandomGenerator/random.h"

using namespace std;

//Definition of functions used

//Initializes the random number generator
void InizRandom(Random& rnd);

//Returns N City objects randomly distributed on a circumference
vector<City> InitCircularCities(int N);
//Returns N City objects randomly distributed in a square
vector<City> InitSquareCities(int N);

//Swaps a and b elements of path._order
void Swap(Path& path, int a, int b);
//Initializes a random population of P Path objects, each connecting N cities
vector<Path> InitRandomPop(Random& rand, int N, int P);

//One way to perform crossover
void CrossoverOperator(Random& rand, Path p1, Path p2, Path& s1, Path& s2, double pc);
//One way to perform mutation
void MutationOperator(Random& rand, Path& path, double pm1, double pm2, double pm3, double pm4);

//Basis to sort Path objects
bool ComparePaths(Path a, Path b);
//Writes output files
void WriteBest(vector<Path> population, int s, ofstream& bout, ofstream& bhout);
//Operator to perform selection and choose a new generation
vector<Path> ReplaceGeneration(Random& rand, vector<Path> old_population, vector<City> cities, int N, double pc, double pm1, double pm2, double pm3, double pm4, int s, ofstream& bout, ofstream& bhout, Path& best_path);

//Wraps up the whole problem
void TravSalesProb(vector<City> cities, int N, int P, int S, double pc, double pm1, double pm2, double pm3, double pm4, ofstream& bout, ofstream& bhout, ofstream& pout);