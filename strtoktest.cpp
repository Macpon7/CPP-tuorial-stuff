//strtok test
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
	string str = "X - Y";
	string * pch;
	
	pch = strtok (str," ");
	
	cout << pch;
}