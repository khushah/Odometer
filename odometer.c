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

int Odometer::previousNumber(int input){
	if(input == min){
		int previous = max;
		return previous;
	}
	while(input>min){
		bool valid = isValidNumber(--input);
		if(valid){
			return input;
		}
	}
}


