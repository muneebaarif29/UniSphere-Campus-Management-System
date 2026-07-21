#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>

// ================================================================
// Class: Student
// ----------------------------------------------------------------
// Represents a student in the UniSphere system.
// Publicly inherits from Person, reusing all identity/account
// data (name, email, phone, password, personId) and adding
// student-specific academic data on top of it.
//
// Future versions will connect viewAttendance(), viewResult(),
// viewFeeStatus() and viewTimetable() to real Attendance, Result,
// Fee and Timetable classes (file/database backed). For now they
// are placeholders that keep the class ready for that expansion.
// ================================================================
class Student : public Person
{
private:
    std::string rollNumber;  // Unique roll/registration number
    std::string department;  // Department the student belongs to
    int semester;             // Current semester of study
    double cgpa;               // Cumulative Grade Point Average

public:
    // Default constructor
    Student();

    // Parameterized constructor
    Student(const std::string& personId,
            const std::string& name,
            const std::string& email,
            const std::string& phone,
            const std::string& password,
            const std::string& rollNumber,
            const std::string& department,
            int semester,
            double cgpa);

    // Virtual destructor
    virtual ~Student();

    // Sets/updates all student-specific data at once
    void setStudentData(const std::string& rollNumber,
                         const std::string& department,
                         int semester,
                         double cgpa);

    // Displays student-specific data (does not repeat Person data)
    void displayStudentData() const;

    // Displays the student's full profile (Person + Student data)
    void viewProfile() const;

    // Placeholder: will later fetch data from the Attendance module
    void viewAttendance() const;

    // Placeholder: will later fetch data from the Result module
    void viewResult() const;

    // Placeholder: will later fetch data from the Fee module
    void viewFeeStatus() const;

    // Placeholder: will later fetch data from the Timetable module
    void viewTimetable() const;

    // Getters
    std::string getRollNumber() const;
    std::string getDepartment() const;
    int getSemester() const;
    double getCGPA() const;

    // Setters
    void setRollNumber(const std::string& rollNumber);
    void setDepartment(const std::string& department);
    void setSemester(int semester);
    void setCGPA(double cgpa);
};

#endif // STUDENT_H