# Student-Heap-CPP
For the 'heap of students' assignment.

 - Algorithm:
Main:
    function prototypes here

    int main{
        vector<Student*> students
        loadStudents(students)
        bool keepGoing = true
        while(keepGoing == true){
            userInput = menu()
            if(input = "0"){
                keepGoing = false
                delStudents(students)
            } // End if
            if(input = "1"){
                showStudentNames(students)
            } // End if
            if(input = "2"){
                printStudents(students)
            }
            if(input = "3"){
                findStudent(students)
            }
        }
    }

    void loadStudents(students vector ref){
        file stream studentFile
        studentFile.open("students.csv")
        string readLine
        // Loading data from file
        while(getline(studentFile, readLine)){
            Student* s = new Student;
            s->init(readLine)
            students.push_back(s)
        } // End while
    } // End loadStudents

    void printStudents(student vector ref){
        for(Student* s: student vector){
            s->printStudent()
        }
    }

    void showStudentNames(){
        for(Student* s: student vector){
            cout << s->getLastFirst() << std::endl
        }
    }

    void findStudent(student vector){
        bool found = false
        cout << "Enter last name of student: " << std::endl
        string query = ""
        cin >> query
        stringstream stream
        for(Student* s: student vector){
            stream.clear()
            string last = ""
            stream = s->getLastFirst()
            getline(stream, last, ',')
            if(query == last){
                s->printStudent()
                found = true
            } // End if
        } // End for
        if(found == false){
            cout << "No results found!" << std::endl
        }
    } // End findStudent

    void delStudents(student vector ref){
        for(Student* s: student vector){
            delete s
        }
    }

    string menu{
        keepGoing = true
        while(keepGoing == true){
            cout << "0) quit" << std::endl << "1) print all student names" << std::endl << "2) print all student data" << std::endl << "3) find a student" << std::endl << std::endl << "Please choose 0-3: " << std::endl
            cin >> input
            if(input is 1, 2, or 3){
                keepGoing = false
            } else {
                cout << "Invalid input!" << std::endl
            }
        }
        return input
    } // End menu



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