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
	// WIP
} // End init

void Date::printDate(){
	std::string months = {"null", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	std::cout << months[month] << ", " << day << ", " << year << std::endl;
} // End printdate
