#include "date.h"
#include <iostream>
#include <sstream>

Date::Date(){
	Date::date = "";
	Date::day = 0;
	Date::month = 0;
	Date::year = 0;
} // End constructor

void Date::init(std::string date){
	Date::date = date;
	std::stringstream stream;
	// I am fairly certain I need these variables for conversion
	std::string sMonth;
	std::string sDay;
	std::string sYear;
	stream.clear();
	// Loading data into stream
	stream.str(Date::date);
	// Parsing data into individual chunks
	getline(stream, sMonth, '/');
	getline(stream, sDay, '/');
	getline(stream, sYear, '/');
	// Clearing since data has been parsed
	stream.clear();
	stream.str("");
	// Converting to int
	stream << sMonth << " " << sDay << " " << sYear;
	stream >> Date::month >> Date::day >> Date::year;
} // End init

void Date::printDate(){
	std::string months[] = {"null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::cout << months[Date::month] << " " << Date::day << ", " << Date::year << std::endl;
} // End printdate
