//============================================================================
// Name        : This.cpp
// Author      : Azfer
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Person.h"
using namespace std;


int main() {
	Person person1;
	cout << person1.toString() << endl;

	Person person2("Azfer", 30);
	cout << person2.toString() << endl;

	Person person3("Azfer", 30, 12345678);
	cout << person3.toString() << endl;


	return 0;
}
