#include "path.h"

using namespace std;

//Reading and Writing access methods
vector<int> Path::get_ord(){
    return _order;
}

void Path::set_ord(vector<int> myord){
    _order=myord;
    _L=_order.size();
}

void Path::set_Nc(int N){
    _Nc=N;
}

int Path::get_ord(int index){
    return _order[index];
} 

void Path::set_ord(int index, int value){
    _order[index]=value;
}


int Path::get_length(){
    return _L;
}

double Path::get_loss(){
   return _loss;
}
   
//Checks for Path
bool Path::IsValid(){
    if(int(_order.size())!=(_Nc+1)) {
        cerr << "Path not valid: wrong lenght." << endl;
        return false;    //Path must cover all cities so
    }
    if(_order[0]!=_order[_Nc]){
        cerr << "Path not valid: first and last cities are different." << endl;
        return false;    //Path must be closed
    }
    if(_order[0]!=0){
        cerr << "Path not valid: first city must be 0." << endl;
        return false;      //First (and last city) fixed such that city.n=0, 
                           //paths that have the same order but for a shift are considered equivalent
    }
    vector<int> theor_counts(_Nc, 0);
    vector<int> counts(_Nc, 0);
    for(int i=1; i<_Nc; i++){
        theor_counts[i]=1;
        counts[_order[i]]+=1;
    }
    if(counts!=theor_counts){
        cerr << "Path not valid: either missing or repeated." << endl;
        return false;      //Checks city by city to ensure that all cities appear exactly one time 
                           //a part from the first and last one which has city.n=0 at this point
    }
    return true;
}     
 
//Loss function evaluation as L^1 distance
void Path::EvalLoss(vector<City> cities){
    double sum=0.;
    for(int i=0; i<_Nc; i++){
        sum+=fabs(cities[_order[i]].get_x() - cities[_order[i+1]].get_x());
        sum+=fabs(cities[_order[i]].get_y() - cities[_order[i+1]].get_y());
    }
    _loss=sum;
}

