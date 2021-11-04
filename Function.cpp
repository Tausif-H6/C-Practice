#include <iostream>
#include <cmath>
using namespace std;

int calCulate (double,double);//Function prototype

int main()
{
double area, radius;
cout<< "This program calculates the area of a circle.\n";
cout<<"What is the radius of the circle? "<<endl;
cin>>radius;
cin>>area;

// area=3* pow(radius,2);
// int s= sqrt(area);
//cout<< "Square root of area  \t"<<  <<endl;

cout<<"The area is  :\t" << calCulate(area,radius)<<endl;

return 0;
}

int calCulate (double a, double b){

    int result = a*b;
    return result;
}