#include <iostream>
#include "MathFormulas.hpp"
using namespace std;

int main()
{	cout <<"Enter the radius: ";
	cin >>radius;
	
	double circ (2.0 * radius * PI), areaCr (radius * radius * PI);	
	
	cout <<"The area of the circle is " <<areaCr <<"." <<endl <<"The circumference of the cylinder is " <<circ <<".";
}
