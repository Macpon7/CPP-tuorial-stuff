//Text based calculator with full input
#include <iostream>
#include <string>

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
	//Declares calc as a char for input later
	char input;
	
	cout << "Welcome to this text based calculator!\n";
	cout << "Here we can do calculations with two numbers at a time.\n";
	
	//Loops until user types "stop"
	do {
		//Instructions to user
		cout << "Type your calculation. (eg 7 + 4)\n";
		cout << "Be careful to make sure there are spaces\n";
		cout << "between your numerals and the sign, or the\n";
		cout << "calculation will fail.\n";
		
		//Gets the calculation command form the user
		getline(cin, input);
		
		//Converts the string input to doubles and determines the calculation to be done
		/*  ==========================
			Use the strtok function!!!
			==========================
		*/
		
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