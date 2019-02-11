#include <iostream>
using namespace std;


class Animal {
private:
	string name;
public:
	Animal() {cout << "(CONSTRUCTOR)  New animal is created" << endl;};
	Animal(const Animal &other) : name(other.name) {cout << "(EXPLICIT COPY CONSTRUCTOR) New animal is created by copying"<< endl;}; //explicitly declaring the copy constructor
	~Animal(){cout << "Destructor called.." << endl;};
	void setName(string name) {this->name = name;};
	void speak() const {cout << "My name is : " << name << endl;};
};

int main() {
	Animal animal1; // new object is instantiated. Hence constructor is invoked.
	animal1.setName("Cat");
	animal1.speak();

	Animal animal2 = animal1; // no new object is instantiated(hence Constructor is not invoked)
							  // but implicitly invoking an inbuilt COPY constructor
	animal2.speak(); // have not invoked the "setNAme" method yet but initiated in the COPY constructor itself - name(other.name)
	animal2.setName("goat");
	animal2.speak();

	Animal animal3(animal1); // another way of calling the copy constructor
	animal3.speak();//default name using - name(other.name)

	Animal *pAnimal4 = new Animal();// another way of creating a constructor using pointer. new memory is allocated
	pAnimal4->setName("lion"); //pointers used a different syntax(->) to access methods
	pAnimal4->speak();
	delete pAnimal4; //to explicitly call the destructor and delete the memory allocated(to free up RAM)

	return 0;
} // all the other destructors are called upon hitting the curly bracket(}) - denote the end of scope for the object
