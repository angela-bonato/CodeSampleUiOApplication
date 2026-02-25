#ifndef __City__
#define __City__

using namespace std;

//Definition of class City

class City {
    private:
        //Coordinates of the city
        double _x;   
        double _y;
        //NAme of the city
        int _n;      

    public:
        //Methods to access (in writing or reading mode) private members 
        double get_x();     
        double get_y();
        int get_n();
        void set_x(double myx);
        void set_y(double myy);
        void set_n(int myn);
};

#endif