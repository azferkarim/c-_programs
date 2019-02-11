/*
 * Cat.cpp
 *
 *  Created on: 11 Jul 2018
 *      Author: azfer
 */
#include <iostream>
#include "Cat.h"

using namespace std;


//implement the Cat class method
//function inside a class is called "method"
void Cat::speak(){
	if (happy){
		cout << "meow.." << endl;
	}
	else{
		cout << "sss.." << endl;
	}
}

void Cat::makeHappy(){
	happy = true;
}

void Cat::makeSad(){
	happy = false;
}


Cat::Cat(){
	cout << "Cat Class created" << endl;

	// values can be initialised here
	//happy = false;

}


Cat::~Cat(){
	cout << "Cat Class destroyed" << endl;
}
