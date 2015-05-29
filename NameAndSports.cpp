//Using getline and cin to get input from the user
#include <iostream>
#include <string>

using namespace std;

int main() {
	//Defining variables
	string name;
	string sports;
	
	//Starts output conversation
	cout << "Hey there, what's your name?\n";
	
	//Gets name from user
	getline (cin, name);
	
	//Talks with user
	cout << "Oh hey there, " << name << ". Nice to meet you.\n";
	
	//Asks about fav sports team
	cout << "What's your favourite sports team, " << name << "?\n";
	
	//Gets name of sports team
	getline (cin, sports);
	
	//Talks about the sports team
	cout << "Cool, I like " << sports << " too!\n";
	cout << "That's all " << name << ", see y'all next time!\n";
	
	//Ends the program
	return 0;
}