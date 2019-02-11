/*
 * Person.h
 *
 *  Created on: 17 Jul 2018
 *      Author: azfer
 */
#include <iostream>
using namespace std;

#ifndef PERSON_H_
#define PERSON_H_

class Person {
private:
	string name;
	int age;
	int ic;
public:
	Person();
	Person(string name, int age);
	Person(string name, int age, int icNumber);
	string toString();
};

#endif /* PERSON_H_ */
