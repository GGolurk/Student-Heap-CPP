#include "student.h"
#include <iostream>
#include <sstream>

Student::Student(){
	Student::studentString = "";
	Student::lName = "";
	Student::fName = "";
	Student::address = new Address();
	Student::doB = new Date();
	Student::expectedGrad = new Date();
	Student::hours = 0;
}// End constructor

Student::init(){

}

Student::getLastFirst(){

}

Student::printStudent(){

}

Student::~Student(){
	delete Student::address;
	delete Student::doB;
	delete Student::expectedGrad;
}
