#include <iostream>
#include "MathFormulas.hpp"

using namespace std;

int main()
{	cout <<"Enter rectangle length and width, separated by a space: ";
	cin >>length >>width;

	double areaR (length * width), circR (length + length + width + width);

	cout <<"The area of the rectangle is " <<areaR <<"." <<endl <<"The perimeter of the rectangle is " <<circR <<".";
}
