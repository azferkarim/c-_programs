
#include <iostream>
using namespace std;

void copyManipulation(int passingValue){ // value is just copied
	cout << "2.	The integer value is : "<< passingValue << endl;
	passingValue = 3; //manipulating the copied value
	cout << "3.	The integer value is : "<< passingValue << endl;
}

void realManipulation(int *passingValue){ // the actual address is passed
	cout << "4.	The address of the integer value is : "<< passingValue << endl;
	*passingValue = 3; //manipulating the actual value
	cout << "5.	The integer value is : "<< *passingValue << endl;
}


int main() {
	int nValue = 1;

	cout << "1.	The integer value is : "<< nValue << endl;

	copyManipulation(nValue); // Just copying the value to the function argument

	cout << "4.	The value (after running the function) is : "<< nValue << endl; // no change in the original value


	cout << "============================================" << endl;
	cout << "=============using pointers=================" << endl;

	realManipulation(&nValue); // passing the address

	cout << "6.	The value (after running the function) is : "<< nValue << endl; // original value is changed!!

	return 0;
}
