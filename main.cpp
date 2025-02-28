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
	while(getline(studentFile, readLine)){
		Student* student = new Student;
		student[counter].init(readLine);
		students.push_back(student[counter]);
	}
	for(int i = 0; i < counter; i++){
		delete students[i];
	}
	studentFile.close();
}
