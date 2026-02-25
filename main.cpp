#include "lib.h"

using namespace std;

int main (int argc, char *argv[]){
    //General variables definitions
    int Ncities=34; //Number of cities, arbitrary
    int Npaths=900;  //Number of paths for each generation, must be an even number
    int Nsteps=200;    //Number of generations, appropriate to ensure convergence
    double pc=0.6;  //Crossover probability
    double pm1=0.07; //Probability of first mutation happening
    double pm2=0.06; //Probability of second mutation happening
    double pm3=0.05; //Probability of third mutation happening
    double pm4=0.04; //Probability of fourth mutation happening
    ofstream bout;  //Loss function of the best path in each generation
    ofstream bhout;  //Average loss function of the best half of each generation 
    ofstream pout;  //Best possible path

    //TSP on the circumference
    cout << "Beginning analysis on the circumference." << endl;
    vector<City> CircCities=InitCircularCities(Ncities);
    bout.open("cbestloss.dat");
    bhout.open("cbesthalfloss.dat");
    pout.open("cbestpath.dat");
    TravSalesProb(CircCities, Ncities, Npaths, Nsteps, pc, pm1, pm2, pm3, pm4, bout, bhout, pout);
    bout.close();
    bhout.close();
    pout.close();

    //TSP in the square
    cout << "Beginning analysis in the square." << endl;
    Nsteps=400;  //Less trivial, more generations are needed
    vector<City> SqCities=InitSquareCities(Ncities);
    bout.open("sbestloss.dat");
    bhout.open("sbesthalfloss.dat");
    pout.open("sbestpath.dat");
    TravSalesProb(SqCities, Ncities, Npaths, Nsteps, pc, pm1, pm2, pm3, pm4, bout, bhout, pout);
    bout.close();
    bhout.close();
    pout.close();

    cout << "End of all analyses." << endl;
    return 0;
}