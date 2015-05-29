#include <iostream>
#include <string>
#include <sstream>

using namespace std;

double addition (double x, double y) {
	double z;
	z=x+y;
	return z;
}

double subtraction (double x, double y) {
	double z;
	z=x-y;
	return z;
}

double multiplication (double x, double y) {
	double z;
	z=x*y;
	return z;
}

double division (double x, double y) {
	double z;
	z=x/y;
	return z;
}

int main() {
	string cmd;
	
	cout << "Welcome to this text based calculator!\n";
	cout << "Here we can do four operations with two numbers at a time.\n";
	
	do {
		cout << "Type two numbers.\n";
		
		double doublex;
		cout << "X = ";
		getline(cin, doublex);
		
		double doubley;
		cout << "Y = ";
		getline (cin, doubley);
		
		cout << "Ok, now what do you want to do with these numbers?\n";
		cout << "Your options are: add, subtract, divide, multiply.\n";
		
		getline(cin, cmd);
		
		double result = 0.0;
		
		if (cmd == "add")
			result = addition(doublex, doubley);
		else if (cmd == "subtract")
			result = subtraction(doublex, doubley);
		else if (cmd == "multiply")
			result = multiplication(doublex, doubley);
		else if (cmd =="divide")
			result = division(doublex, doubley);
		else
			cout << "That didn't work.\n";
			
		cout << result << '\n';
		
		cout << "If you want to stop here, type stop. If not, press enter.\n";
		
		getline(cin, cmd);
	} while (cmd != "stop");
	
	return 0;
}