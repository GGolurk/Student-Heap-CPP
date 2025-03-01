#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>
#include <vector>
#include <fstream>

int main(){
	std::ifstream studentFile;
	studentFile.open("students.csv");
	std::vector<Student> students;
	std::string readLine = "";
	int counter = 0;
	Student* student = new Student[50];
	while(getline(studentFile, readLine)){
		student[counter].init(readLine);
		students.push_back(student[counter]);
		counter++;
	}
	delete[] student;
	studentFile.close();
}
