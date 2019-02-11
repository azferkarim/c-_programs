/*
 * Person.cpp
 *
 *  Created on: 17 Jul 2018
 *      Author: azfer
 */

#include "Person.h"
#include <sstream>

Person::Person() {
	// TODO Auto-generated constructor stub
	name = "unknown";
	age = 0;
	ic = 0;
}

Person::Person(string name, int age) {
	// TODO Auto-generated constructor stub
	this->name = name;
	this->age = age;
}

//another new way of doing it - using "Constructor Initialization List"
Person::Person(string name, int age, int icNumber):name(name),age(age),ic(icNumber) {
	// TODO Auto-generated constructor stub
}



string Person::toString(){
	stringstream ss;
	ss << "Name is : ";
	ss << name;
	ss << ". Age is : ";
	ss << age;
	ss << ". IC number is : ";
	ss << ic;
	return ss.str();
}

