//Echo machine
#include <iostream>
#include <string>

using namespace std;

int main() {
	//Declares the string str
	string str;
	
	//Loop using "do {} while ();"
	do {
		//Essentially this repeats the text the user inouts until the user inputs goodbye
		cout << "Enter texts: ";
		getline(cin, str);
		cout << "You entered: " << str << '\n';
	} while (str != "goodbye");
	
	//Terminates
	return 0;
}