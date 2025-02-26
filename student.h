#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS
#include <iostream>
#include "address.h"
#include "date.h"

class Student{
	protected:
		std::string studentString;
		std::string lName;
		std::string fName;
		Address* address;
		Date* doB;
		Date* expectedGrad;
		int hours;
	public:
		Student();
		void init(std::string studentString);
		void printStudent();
		std::string getLastFirst();
		~Student();
}; // end class

#endif
