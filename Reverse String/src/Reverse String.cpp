//============================================================================
// Name        : Reverse.cpp
// Author      : Azfer
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	char text[]= "Hello";

	int textSize = sizeof(text)-1; //without the ZERO

	char *pStart = text; // points to the first element
	char *pEnd = text + textSize - 1; //0-4 excluding 5 // points to the last element


	cout << *pStart << endl;
	cout << *pEnd << endl;

	while(pStart<pEnd){

		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}


	cout <<"The reversed string is : "<< text << endl;


	return 0;
}
