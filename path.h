#ifndef __Path__
#define __Path__

#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include "city.h"

using namespace std;

//Definition of class Path

class Path{
    private:
        //I don't need to store a vector of City type objects, I just need to know their order
        vector<int> _order;  
        //Length of _order
        int _L;
        //Loss function value 
        double _loss;  
        //Number of cities under consideration
        int _Nc; 

    public:
        //Reading and Writing access to the whole _order
        vector<int> get_ord();  
        void set_ord(vector<int> myord);
        //Reading and Writing access to a single component of _order
        int get_ord(int index);  
        void set_ord(int index, int value);  
        //Set number of cities
        void set_Nc(int N);
        //Reads length of _order
        int get_length();
        //Check whether Path complies with the constraints of the problem
        bool IsValid();  
        //Evaluates the loss function for the cities under examitation ordered as defined by _order   
        void EvalLoss(vector<City> cities);  
        //Reads the loss function
        double get_loss();  
};

#endif