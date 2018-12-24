#include <iostream>
#include "MathFormulas.hpp"
using namespace std;

int main()
{	cout <<"Enter the radius and height separated by a space: ";
	cin >>radius >>height;
	
	double circ (2.0 * radius * PI), areaCr (radius * radius * PI), areaCy ((2.0 * areaCr) + (circ * height)), volCy (areaCr * height);

	cout <<"The volume of the cylinder is " <<volCy <<"." <<endl <<"The surface area of the cylinder is " <<areaCy <<".";
}
