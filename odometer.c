#include <iostream>
#include <string>

#define MIN 1
#define MAX 9

class Odometer {
	
	public:
		int length;
		Odometer(int);
		bool isValidNumber(int)
		int nextNumber(int);
		int previousNumber(int);
		int difference(int, int);
}

Odometer::Odometer(int lenght) {
	this->length = length;
}