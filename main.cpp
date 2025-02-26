#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>

//void testAddress();
void testDate();

int main(){
	std::cout << "Hello!" << std::endl;
	//testAddress();
	testDate();
	return 0;
}
/*
void testAddress(){
	Address a;
	a.init("123 W Main St.", "Muncie", "IN", "47383");
	a.printAddress();
}*/

void testDate(){
	Date d;
	d.init("2/26/2025");
	d.printDate();
}
