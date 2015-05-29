//Text based calculator
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Function to add x and y (x+y)
double addition (double x, double y) {
	double z;
	z=x+y;
	return z;
}

//Function to subtract y from x (x-y)
double subtraction (double x, double y) {
	double z;
	z=x-y;
	return z;
}

//Function to multiply x by y (x*y)
double multiplication (double x, double y) {
	double z;
	z=x*y;
	return z;
}

//Function to divide x by y (x/y)
double division (double x, double y) {
	double z;
	z=x/y;
	return z;
}

int main() {
	//Declares cmd as a string for input later
	string cmd;
	
	//Initialises interface
	cout << "Welcome to this text based calculator!\n";
	cout << "Here we can do four operations with two numbers at a time.\n";
	
	//Loops until user types "stop"
	do {
		//Instructions to user
		cout << "Type two numbers.\n";
		
		//Gets the first number and makes it a floating point
		double doublex;
		cout << "X = ";
		getline(cin, doublex);
		
		//Gets the second number and makes it a floating point
		double doubley;
		cout << "Y = ";
		getline (cin, doubley);
		
		//Instructions to user
		cout << "Ok, now what do you want to do with these numbers?\n";
		cout << "Your options are: add, subtract, divide, multiply.\n";
		
		//Gets the calculation command form the user
		getline(cin, cmd);
		
		//Declares the result as a floating point of 0.0
		double result = 0.0;
		
		if (cmd == "add")
			//Calls addition function using the two numbers as input
			result = addition(doublex, doubley);
		else if (cmd == "subtract")
			//Calls subtraction function using the two numbers as input
			result = subtraction(doublex, doubley);
		else if (cmd == "multiply")
			//Calls multiplication function using the two numbers as input
			result = multiplication(doublex, doubley);
		else if (cmd =="divide")
			//Calls the division function using the two numbers as input
			result = division(doublex, doubley);
		else
			//If the inputted calculation command isn't recognised, it throws an error
			cout << "That didn't work.\n";
			
		//Prints the result of whatever calculation was performed
		cout << result << '\n';
		
		//Gives the user the option to stop or continue
		cout << "If you want to stop here, type stop. If not, press enter.\n";
		
		//Gets the stop or contine command from user
		getline(cin, cmd);
	} while (cmd != "stop");
	
	return 0;
}