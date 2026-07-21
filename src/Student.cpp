#include "Student.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Calls Person's default constructor and initializes student
// fields to safe default values.
// ----------------------------------------------------------------
Student::Student()
    : Person(), rollNumber(""), department(""), semester(0), cgpa(0.0)
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Forwards identity/account data to Person's constructor and
// initializes student-specific fields with the given values.
// ----------------------------------------------------------------
Student::Student(const std::string& personId,
                  const std::string& name,
                  const std::string& email,
                  const std::string& phone,
                  const std::string& password,
                  const std::string& rollNumber,
                  const std::string& department,
                  int semester,
                  double cgpa)
    : Person(personId, name, email, phone, password),
      rollNumber(rollNumber), department(department),
      semester(semester), cgpa(cgpa)
{
}

// ----------------------------------------------------------------
// Virtual Destructor
// No dynamic resources to release; Person's destructor handles
// base-class cleanup automatically.
// ----------------------------------------------------------------
Student::~Student()
{
}

// ----------------------------------------------------------------
// setStudentData()
// Updates all student-specific fields at once. Person's data is
// left untouched here; use Person::setData() for that.
// ----------------------------------------------------------------
void Student::setStudentData(const std::string& rollNumber,
                              const std::string& department,
                              int semester,
                              double cgpa)
{
    this->rollNumber = rollNumber;
    this->department = department;
    this->semester = semester;
    this->cgpa = cgpa;
}

// ----------------------------------------------------------------
// displayStudentData()
// Prints only the student-specific fields. Person's data is shown
// separately via Person::displayData() to avoid duplication.
// ----------------------------------------------------------------
void Student::displayStudentData() const
{
    std::cout << "Roll Number : " << rollNumber << std::endl;
    std::cout << "Department  : " << department << std::endl;
    std::cout << "Semester    : " << semester   << std::endl;
    std::cout << "CGPA        : " << cgpa       << std::endl;
}

// ----------------------------------------------------------------
// viewProfile()
// Combines Person's data and Student's data into one full profile.
// Reuses displayData() from Person instead of duplicating fields.
// ----------------------------------------------------------------
void Student::viewProfile() const
{
    std::cout << "----- Student Profile -----" << std::endl;
    displayData();          // Inherited from Person
    displayStudentData();   // Student-specific fields
}

// ----------------------------------------------------------------
// viewAttendance()
// Placeholder for now. In a future version, this will retrieve
// real attendance records from the Attendance module (file or
// database backed).
// ----------------------------------------------------------------
void Student::viewAttendance() const
{
    std::cout << "Attendance module not connected yet." << std::endl;
}

// ----------------------------------------------------------------
// viewResult()
// Placeholder for now. Will later connect to the Result module.
// ----------------------------------------------------------------
void Student::viewResult() const
{
    std::cout << "Result module not connected yet." << std::endl;
}

// ----------------------------------------------------------------
// viewFeeStatus()
// Placeholder for now. Will later connect to the Fee module.
// ----------------------------------------------------------------
void Student::viewFeeStatus() const
{
    std::cout << "Fee module not connected yet." << std::endl;
}

// ----------------------------------------------------------------
// viewTimetable()
// Placeholder for now. Will later connect to the Timetable module.
// ----------------------------------------------------------------
void Student::viewTimetable() const
{
    std::cout << "Timetable module not connected yet." << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Student::getRollNumber() const
{
    return rollNumber;
}

std::string Student::getDepartment() const
{
    return department;
}

int Student::getSemester() const
{
    return semester;
}

double Student::getCGPA() const
{
    return cgpa;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Student::setRollNumber(const std::string& rollNumber)
{
    this->rollNumber = rollNumber;
}

void Student::setDepartment(const std::string& department)
{
    this->department = department;
}

void Student::setSemester(int semester)
{
    this->semester = semester;
}

void Student::setCGPA(double cgpa)
{
    this->cgpa = cgpa;
}