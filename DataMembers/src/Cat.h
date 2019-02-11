/*
 * Cat.h
 *
 *  Created on: 11 Jul 2018
 *      Author: azfer
 */

#ifndef CAT_H_
#define CAT_H_

class Cat { //class called "Cat"
private:
	bool happy;
public:
	void speak(); // method "speak"
	void makeHappy();
	void makeSad();
	Cat();
	~Cat();
};

#endif /* CAT_H_ */
