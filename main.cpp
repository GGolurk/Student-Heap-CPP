#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>

void testAddress();
void testDate();
void testStudent();

int main(){
	std::cout << "Hello!" << std::endl;
	//testAddress();
	//testDate();
	testStudent();
	return 0;
}

void testAddress(){
	Address a;
	a.init("123 W Main St.", "Muncie", "IN", "47383");
	a.printAddress();
}

void testDate(){
	Date d;
	d.init("2/26/2025");
	d.printDate();
}

void testStudent(){
	std::string studentString = "Danielle,Johnson,32181 Johnson Course Apt. 389,New Jamesside,IN,59379,02/17/2004,05/15/2027,65";
	Student* student = new Student();
	student->init(studentString);
	student->printStudent();
	std::string nameTest = student->getLastFirst();
	std::cout << nameTest << std::endl;
	delete student;
}
