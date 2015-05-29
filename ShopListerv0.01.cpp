//First draft of ShopLister
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	//sprice = string price
	string sprice;
	
	//dprice = double price
	double dprice;
	
	//sstax = string sales tax
	string sstax;
	
	//dstax = double sales tax
	double dstax;
	
	//dfinal = double final price
	double dfinal;
	
	//Starts interaction with user
	cout << "Hello! I am a program to calculate the total price you pay at checkout.\n";
	cout << "What is the total price of all your items?\n";
	
	//Gets the price from the user
	getline (cin, sprice);
	stringstream(sprice) >> dprice;
	
	//Conversation keps going
	cout << "Ok, how about the local sales tax (in decimal form. eg: 0.12)?\n";
	
	//Gets the sales tax
	getline (cin, sstax);
	stringstream(sstax) >> dstax;
	
	//Calculates the final price
	dfinal = dprice * (1 + dstax);
	
	//Displays final price
	cout << "Ok, your final price will be $" << dfinal << ".\nGoodbye.\n";
	
	//Terminates the program
	return 0;
}