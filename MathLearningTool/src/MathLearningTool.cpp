//============================================================================
// Name        : MathLearningTool.cpp
// Author      : Azfer
// Version     :
// Copyright   : Copyrights Reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	long startTime = time(0);

	cout << "1 : " << startTime << endl;

    srand(time(0));
	int randNum1 = rand()%10;
	int randNum2 = rand()%10;

	cout << "2 : " << randNum1 << endl;
	cout << "3 : " << randNum2 << endl;


	if(randNum1<randNum2)
	{
		// swap num1 with num2
		//ask for answer for num1 - num2
		//increase the count for correct answer

	}

	return 0;
}
