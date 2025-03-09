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

void Student::init(std::string data){
	Student::studentString = data;
	std::stringstream parser;
	// Initializing temporary variables.
	std::string tempStreet = "";
	std::string tempCity = "";
	std::string tempState = "";
	std::string tempZip = "";
	std::string tempDoB = "";
	std::string tempGradDate = "";
	std::string tempHours = "";
	// Parsing data.
	parser.str(data);
	getline(parser, Student::fName, ',');
	getline(parser, Student::lName, ',');
	getline(parser, tempStreet, ',');
	getline(parser, tempCity, ',');
	getline(parser, tempState, ',');
	getline(parser, tempZip, ',');
	getline(parser, tempDoB, ',');
	getline(parser, tempGradDate, ',');
	getline(parser, tempHours);
	// Initializing address and date instances
	Student::address->init(tempStreet, tempCity, tempState, tempZip);
	Student::doB->init(tempDoB);
	Student::expectedGrad->init(tempGradDate);
	// Converting hours to int
	parser.clear();
	parser.str(tempHours);
	parser >> Student::hours;
}

std::string Student::getLastFirst(){
	std::string fullName = Student::lName + ", " + Student::fName;
	return fullName;	
}

void Student::printStudent(){
	std::cout << Student::lName << ", " << Student::fName << std::endl;
	Student::address->printAddress();
	std::cout << "DOB: ";
	Student::doB->printDate();
	std::cout << "Grad: ";
	Student::expectedGrad->printDate();
	std::cout << "Credit hours: " << Student::hours << std::endl;
	std::cout << "_________________________" << std::endl;
}

Student::~Student(){
	delete Student::address;
	delete Student::doB;
	delete Student::expectedGrad;
}
