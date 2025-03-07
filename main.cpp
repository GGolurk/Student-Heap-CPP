#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>
#include <vector>
#include <fstream>

void loadStudents(std::vector<Student*>& students);
//void printStudents(std::vector<Student*>& students);
//void showStudentNames(std::vector<Student*>& students);
//void findStudent(std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);
//void menu();

int main(){
	std::vector<Student*> students;
	loadStudents(students);
	// Do stuff here!
	delStudents(students);
} // End main

void loadStudents(std::vector<Student*>& students){
	// Opening students.csv
	std::ifstream studentFile;
	studentFile.open("students.csv");
	std::string readLine = "";
	// Loading data into student instances on the heap with pointers inside a vector
	while(getline(studentFile, readLine)){
		Student* s = new Student;
		s->init(readLine);
		students.push_back(s);
	} // End while
	studentFile.close();
} // End loadStudents

void delStudents(std::vector<Student*>& students){
	for(Student* s: students){
		delete s;
	} // End for
} // End delStudents
