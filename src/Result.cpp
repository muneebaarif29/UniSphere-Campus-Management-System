#include "Result.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Initializes all fields to safe default values.
// ----------------------------------------------------------------
Result::Result()
    : resultId(""), studentRollNumber(""), courseCode(""),
      marks(0.0), grade("")
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Initializes a result record with the given data.
// ----------------------------------------------------------------
Result::Result(const std::string& resultId,
               const std::string& studentRollNumber,
               const std::string& courseCode,
               double marks,
               const std::string& grade)
    : resultId(resultId), studentRollNumber(studentRollNumber),
      courseCode(courseCode), marks(marks), grade(grade)
{
}

// ----------------------------------------------------------------
// Destructor
// No dynamic resources to release currently.
// ----------------------------------------------------------------
Result::~Result()
{
}

// ----------------------------------------------------------------
// setResultData()
// Updates all result fields at once. Later, this will be the
// function called after reading a record from a file or database
// row, or after a teacher uploads results via
// Teacher::uploadResult().
// ----------------------------------------------------------------
void Result::setResultData(const std::string& resultId,
                            const std::string& studentRollNumber,
                            const std::string& courseCode,
                            double marks,
                            const std::string& grade)
{
    this->resultId = resultId;
    this->studentRollNumber = studentRollNumber;
    this->courseCode = courseCode;
    this->marks = marks;
    this->grade = grade;
}

// ----------------------------------------------------------------
// displayResult()
// Prints the result record's information to the console.
// Future versions may reuse this inside Student::viewResult()
// once real Result objects are connected to a student.
// ----------------------------------------------------------------
void Result::displayResult() const
{
    std::cout << "Result ID    : " << resultId          << std::endl;
    std::cout << "Roll Number  : " << studentRollNumber << std::endl;
    std::cout << "Course Code  : " << courseCode        << std::endl;
    std::cout << "Marks        : " << marks              << std::endl;
    std::cout << "Grade        : " << grade              << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Result::getResultId() const
{
    return resultId;
}

std::string Result::getStudentRollNumber() const
{
    return studentRollNumber;
}

std::string Result::getCourseCode() const
{
    return courseCode;
}

double Result::getMarks() const
{
    return marks;
}

std::string Result::getGrade() const
{
    return grade;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Result::setResultId(const std::string& resultId)
{
    this->resultId = resultId;
}

void Result::setStudentRollNumber(const std::string& studentRollNumber)
{
    this->studentRollNumber = studentRollNumber;
}

void Result::setCourseCode(const std::string& courseCode)
{
    this->courseCode = courseCode;
}

void Result::setMarks(double marks)
{
    this->marks = marks;
}

void Result::setGrade(const std::string& grade)
{
    this->grade = grade;
}