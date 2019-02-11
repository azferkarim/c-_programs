#include <iostream>
using namespace std;



#ifndef PERSON_H_
#define PERSON_H_

// simple function
void displayName(string person);

class Person{ // simple class
private:
	string name;
	int age;
public:
	void displayName(string person); //simple method
	Person(); //simple constructor that takes no argument
	Person(string newName); //constructor that takes 1 argument
	Person(string newName, int newAge); //constructor that takes 2 arguments
	string toString();
};



#endif /* PERSON_H_ */
