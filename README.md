# Student-Heap-CPP
For the 'heap of students' assignment.

 - Algorithm:
Main:
    //Open the students.csv file
    ifstream studentFile
    studentFile.open("students.csv")
    
    //Create a vector of Student pointers
    std vector<Student> students;

    //Load each student from a line in the CSV file
    string readLine = "";
    while(getline(studentFile, readLine)){
        Student* s = new Student
        s->init(readLine)
        students.push_back(s)
    }

    //Present a menu to the user

        //quit
        exit the program
        for(Student* s: students){
            delete s;
        }
        //print the names of all the students
        void printAllName(){
            for length of vector{
                
            }
        }
        //print the details of all the students
        //search for a student
    //The user will be able to choose from these three options
    //When the user chooses to quit, the program cleans up the vector, closes the file, and exits
    delete[] student;
    for i in counter{
        delete students[i];
    }



Address:
Extremely simple. No explanation required.

Date:
init(date){
    date date = date
    stringstream stream
    string sMonth
    string sDay
    string sYear

    stream.clear()
    stream.str(date date)
    getline(stream, sMonth, '/')
    getline(stream, sDay, '/')
    getline(stream, sYear)
    stream.clear()
    stream.str("")
    stream << sMonth << " " << sDay << " " << sYear
    stream >> date month >> date day >> date year
}

printDate(){
    string months = {"null", all 12 months}
    cout << months[date month] << " " << date day << ", " << date year << std::endl
}

Student:

void init(string student){
    student studentString = student
    stringstream parser
    string tempStreet
    string tempCity
    string tempState
    string tempZip
    string tempDoB
    string tempGradDate
    string tempHours

    parser.str(studentString);
    getline(parser, student lName, ',')
    getline(parser, student fName, ',')
    getline(parser, tempStreet, ',')
    getline(parser, tempCity, ',')
    getline(parser, tempState, ',')
    getline(parser, tempZip, ',')
    getline(parser, tempDoB, ',')
    getline(parser, tempGradDate, ',')    
    getline(parser, tempHours)

    student address->init(tempStreet, tempCity, tempState, tempZip)
    student doB->init(tempDate)
    student expectedGrad->init(tempDate)

    parser.clear()
    parser.str(tempHours)
    parser >> student hours
}

void printStudent(){
    cout << fName << " " << lName << std::endl
    address.printAddress()
    cout << "DOB: "
    doB.printDate()
    cout << "Grad: "
    expectedGrad.printDate()
    cout << "Credits: " << hours
}

string getLastFirst(){
    fullName = student lName + " " + student fName
    return fullName
}