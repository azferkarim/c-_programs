#include <iostream>
#include "Cat.h"

using namespace std;

int main() {
	{
		Cat jim; //Object called "jim"


		//call the variables and functions using objects
		jim.makeSad();
		jim.speak();
	} // curly brackets are created to implement destructors to destroy the object "jim"

	Cat bob; //Object called "jim"

	//call the variables and functions using objects
	bob.makeHappy();
	bob.speak();
	// all other destructors are automatically evoked.
	return 0;
}
