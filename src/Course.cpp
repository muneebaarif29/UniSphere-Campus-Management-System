#include "Course.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Initializes all fields to safe default values.
// ----------------------------------------------------------------
Course::Course()
    : courseCode(""), courseName(""), creditHours(0), teacherName("")
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Initializes a course with the given data.
// ----------------------------------------------------------------
Course::Course(const std::string& courseCode,
               const std::string& courseName,
               int creditHours,
               const std::string& teacherName)
    : courseCode(courseCode), courseName(courseName),
      creditHours(creditHours), teacherName(teacherName)
{
}

// ----------------------------------------------------------------
// Destructor
// No dynamic resources to release currently.
// ----------------------------------------------------------------
Course::~Course()
{
}

// ----------------------------------------------------------------
// setCourseData()
// Updates all course fields at once.
// ----------------------------------------------------------------
void Course::setCourseData(const std::string& courseCode,
                            const std::string& courseName,
                            int creditHours,
                            const std::string& teacherName)
{
    this->courseCode = courseCode;
    this->courseName = courseName;
    this->creditHours = creditHours;
    this->teacherName = teacherName;
}

// ----------------------------------------------------------------
// displayCourse()
// Prints the course's information to the console.
// ----------------------------------------------------------------
void Course::displayCourse() const
{
    std::cout << "Course Code  : " << courseCode  << std::endl;
    std::cout << "Course Name  : " << courseName  << std::endl;
    std::cout << "Credit Hours : " << creditHours << std::endl;
    std::cout << "Teacher      : " << teacherName << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Course::getCourseCode() const
{
    return courseCode;
}

std::string Course::getCourseName() const
{
    return courseName;
}

int Course::getCreditHours() const
{
    return creditHours;
}

std::string Course::getTeacherName() const
{
    return teacherName;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Course::setCourseCode(const std::string& courseCode)
{
    this->courseCode = courseCode;
}

void Course::setCourseName(const std::string& courseName)
{
    this->courseName = courseName;
}

void Course::setCreditHours(int creditHours)
{
    this->creditHours = creditHours;
}

void Course::setTeacherName(const std::string& teacherName)
{
    this->teacherName = teacherName;
}