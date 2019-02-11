#include <iostream>
#include "Person.h"
#include <sstream>

using namespace std;

void displayName(string person1){
	cout << "The person name is : " << person1 << endl;
}

void Person::displayName(string person2){
	cout << "The person name is : "<< person2<< endl;
}

//constructor
Person::Person(){
	name = "undefined";
	age = 0;
}

//constructor
Person::Person(string newName){
	name = newName;// setting the private variable through public constructor
	age = 2; // just to give some value. otherwise, random value will be initialized
}


//constructor
Person::Person(string newName, int newAge){
	name = newName;// setting the private variable through public constructor
	age = newAge;
}


string Person::toString(){
	stringstream ss; //easy with string stream header

	ss << "Name : ";
	ss << name;
	ss << " & Age : ";
	ss << age;

	return ss.str(); //convert it to string
}

