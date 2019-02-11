//============================================================================
// Name        : Array.cpp
// Author      : Azfer
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int table[10];

	for(int i=0;i<10;i++){
		for (int j=0;j<10;j++){
			cout << (i+1)*(j+1) << " " << flush;
		}
		cout << endl;
	}
	return 0;
}
