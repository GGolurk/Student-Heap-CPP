#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>

void testAddress();

int main(){
	std::cout << "Hello!" << std::endl;
	testAddress();
	return 0;
}

void testAddress(){
	Address a;
	a.init("123 W Main St.", "Muncie", "IN", "47383");
	a.printAddress();
}
