//Custon countdown using a while loop
#include <iostream>
using namespace std;

int main() {
	//Declares n to be 10
	int n = 10;
	
	//Loop: while n is greater than zero, print n and reduce n by one
	while (n>0) {
		cout << n << ", ";
		--n;
	}
	
	//Once loop is done (n is now zero) print liftoff
	cout << "liftoff";
	
	//Terminate
	return 0;
}