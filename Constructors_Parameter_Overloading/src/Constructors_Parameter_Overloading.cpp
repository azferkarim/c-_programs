
#include <iostream>
#include "Person.h"
using namespace std;



int main() {
	displayName("Azfer");//simple function

	Person person; //simple class object
	person.displayName("new Azfer"); // call the class method

	//simple object and constructor with default values
	Person person1; // call the constructor that takes no arguments
	cout << person1.toString() << endl;

	//simple object and constructor with setter
	Person person2("one argument"); // call the constructor that takes one argument
	cout << person2.toString() << endl;

	//simple object and constructor with setter
	Person person3("two arguments", 3); // call the constructor with two arguments
	cout << person3.toString() << endl;

	return 0;
}

