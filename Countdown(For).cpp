//Countdown using a for loop
#include <iostream>
#include <string>
 using namespace std;
 
 int main() {
	 //For loop, n is 10, while n is greater than zero -> decrease n by one
	 for (int n=10; n>0; --n) {
		 //Every time the loop loops, print n
		 cout << n <<", ";
	 }
	 //As n is finally zero, print "Liftoff!"
	 cout << "liftoff!";
	 
	 //Terminate
	 return 0;
 }