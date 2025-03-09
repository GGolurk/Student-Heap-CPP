#include "address.h"
#include "date.h"
#include "student.h"
#include <iostream>
#include <vector>
#include <fstream>

void loadStudents(std::vector<Student*>& students);
void printStudents(std::vector<Student*>& students);
void showStudentNames(std::vector<Student*>& students);
//void findStudent(std::vector<Student*>& students);
void delStudents(std::vector<Student*>& students);
std::string menu();

int main(){
	std::vector<Student*> students;
	loadStudents(students);
	bool keepGoing = true;
	while(keepGoing == true){
		std::string userInput = menu();
		if(userInput == "0"){
			keepGoing = false;
			delStudents(students);
		} // End if quit
		if(userInput == "1"){
			showStudentNames(students);
		} // End if print names
		if(userInput == "2"){
			printStudents(students);
		} // End if print data
		if(userInput == "3"){
			
		} // End if find student
	} // End while
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

void printStudents(std::vector<Student*>& students){
	for(Student* s: students){
		s->printStudent();
	} // End for
} // End printStudents

void showStudentNames(std::vector<Student*>& students){
	for(Student* s: students){
		std::cout << s->getLastFirst() << std::endl;
	} // End for
} // End showStudentNames

void delStudents(std::vector<Student*>& students){
	for(Student* s: students){
		delete s;
	} // End for
} // End delStudents

std::string menu(){
	bool keepGoing = true;
	std::string input = "";
	std::cout << "0) quit" << std::endl << "1) print all student names" << std::endl << "2) print all student data" << std::endl << "3) find a student" << std::endl << std::endl << "Please choose 0-3: " << std::endl;
	while(keepGoing == true){	
		std::cin >> input;
		// Input validation
		if(input != "0"){
			if(input != "1"){
				if(input != "2"){
					if(input != "3"){
						std::cout << "Invalid input! Please enter a number from 0-3." << std::endl;
					} else {
						keepGoing = false;
					} // End if/else 3
				} else {
					keepGoing = false;
				} // End if/else 2
			} else {
				keepGoing = false;
			} // End if/else 1
		} else {
			keepGoing = false;
		} // End if/else 0
	} // End while
	return input;
} // End menu
