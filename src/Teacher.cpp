#include "Teacher.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Calls Person's default constructor and initializes teacher
// fields to safe default (empty) values.
// ----------------------------------------------------------------
Teacher::Teacher()
    : Person(), teacherId(""), department(""),
      specialization(""), designation("")
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Forwards identity/account data to Person's constructor and
// initializes teacher-specific fields with the given values.
// ----------------------------------------------------------------
Teacher::Teacher(const std::string& personId,
                  const std::string& name,
                  const std::string& email,
                  const std::string& phone,
                  const std::string& password,
                  const std::string& teacherId,
                  const std::string& department,
                  const std::string& specialization,
                  const std::string& designation)
    : Person(personId, name, email, phone, password),
      teacherId(teacherId), department(department),
      specialization(specialization), designation(designation)
{
}

// ----------------------------------------------------------------
// Virtual Destructor
// No dynamic resources to release; Person's destructor handles
// base-class cleanup automatically.
// ----------------------------------------------------------------
Teacher::~Teacher()
{
}

// ----------------------------------------------------------------
// setTeacherData()
// Updates all teacher-specific fields at once. Person's data is
// left untouched here; use Person::setData() for that.
// ----------------------------------------------------------------
void Teacher::setTeacherData(const std::string& teacherId,
                              const std::string& department,
                              const std::string& specialization,
                              const std::string& designation)
{
    this->teacherId = teacherId;
    this->department = department;
    this->specialization = specialization;
    this->designation = designation;
}

// ----------------------------------------------------------------
// displayTeacherData()
// Prints only the teacher-specific fields. Person's data is shown
// separately via Person::displayData() to avoid duplication.
// ----------------------------------------------------------------
void Teacher::displayTeacherData() const
{
    std::cout << "Teacher ID     : " << teacherId      << std::endl;
    std::cout << "Department     : " << department     << std::endl;
    std::cout << "Specialization : " << specialization << std::endl;
    std::cout << "Designation    : " << designation    << std::endl;
}

// ----------------------------------------------------------------
// viewProfile()
// Combines Person's data and Teacher's data into one full profile.
// Reuses displayData() from Person instead of duplicating fields.
// ----------------------------------------------------------------
void Teacher::viewProfile() const
{
    std::cout << "----- Teacher Profile -----" << std::endl;
    displayData();          // Inherited from Person
    displayTeacherData();   // Teacher-specific fields
}

// ----------------------------------------------------------------
// manageAttendance()
// Placeholder for now. Will later connect to the Attendance module
// so teachers can mark/update student attendance.
// ----------------------------------------------------------------
void Teacher::manageAttendance() const
{
    std::cout << "Attendance module not connected yet." << std::endl;
}

// ----------------------------------------------------------------
// uploadResult()
// Placeholder for now. Will later connect to the Result module.
// ----------------------------------------------------------------
void Teacher::uploadResult() const
{
    std::cout << "Result module not connected yet." << std::endl;
}

// ----------------------------------------------------------------
// assignCourse()
// Placeholder for now. Will later connect to the Course module.
// ----------------------------------------------------------------
void Teacher::assignCourse() const
{
    std::cout << "Course module not connected yet." << std::endl;
}

// ----------------------------------------------------------------
// viewSchedule()
// Placeholder for now. Will later connect to the Timetable module.
// ----------------------------------------------------------------
void Teacher::viewSchedule() const
{
    std::cout << "Timetable module not connected yet." << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Teacher::getTeacherId() const
{
    return teacherId;
}

std::string Teacher::getDepartment() const
{
    return department;
}

std::string Teacher::getSpecialization() const
{
    return specialization;
}

std::string Teacher::getDesignation() const
{
    return designation;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Teacher::setTeacherId(const std::string& teacherId)
{
    this->teacherId = teacherId;
}

void Teacher::setDepartment(const std::string& department)
{
    this->department = department;
}

void Teacher::setSpecialization(const std::string& specialization)
{
    this->specialization = specialization;
}

void Teacher::setDesignation(const std::string& designation)
{
    this->designation = designation;
}