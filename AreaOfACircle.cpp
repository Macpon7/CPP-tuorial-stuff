// Program to calculate the area of a circle of radius 5 units

#include <iostream>
using namespace std;

const double pi = 3.1415926;									// Defines pi
const char newline = '\n';										// Defines the action newline

int main() {
	double r;													// Defines the radius
	
	cout << "What is the radius?\n";
	cin >> r;
	
	double area;												// Defines the area
	
	area = pi * r * r;											// Calculates the area
	
	cout << "The radius is " << r << newline;					// Outputs
	cout << "The area is " << area << newline;					// Outputs
	cout << "My work here is done" << newline;					// Outputs
	
	return 0;													// Terminates the program
}