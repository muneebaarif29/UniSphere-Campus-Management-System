#include "Attendance.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Initializes all fields to empty strings.
// ----------------------------------------------------------------
Attendance::Attendance()
    : attendanceId(""), studentRollNumber(""), courseCode(""),
      date(""), status("")
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Initializes an attendance record with the given data.
// ----------------------------------------------------------------
Attendance::Attendance(const std::string& attendanceId,
                        const std::string& studentRollNumber,
                        const std::string& courseCode,
                        const std::string& date,
                        const std::string& status)
    : attendanceId(attendanceId), studentRollNumber(studentRollNumber),
      courseCode(courseCode), date(date), status(status)
{
}

// ----------------------------------------------------------------
// Destructor
// No dynamic resources to release currently.
// ----------------------------------------------------------------
Attendance::~Attendance()
{
}

// ----------------------------------------------------------------
// setAttendanceData()
// Updates all attendance fields at once. Later, this will be the
// function called after reading a record from a file or database
// row, or after a teacher marks attendance via
// Teacher::manageAttendance().
// ----------------------------------------------------------------
void Attendance::setAttendanceData(const std::string& attendanceId,
                                    const std::string& studentRollNumber,
                                    const std::string& courseCode,
                                    const std::string& date,
                                    const std::string& status)
{
    this->attendanceId = attendanceId;
    this->studentRollNumber = studentRollNumber;
    this->courseCode = courseCode;
    this->date = date;
    this->status = status;
}

// ----------------------------------------------------------------
// displayAttendance()
// Prints the attendance record's information to the console.
// Future versions may reuse this inside Student::viewAttendance()
// once real Attendance objects are connected to a student.
// ----------------------------------------------------------------
void Attendance::displayAttendance() const
{
    std::cout << "Attendance ID : " << attendanceId      << std::endl;
    std::cout << "Roll Number   : " << studentRollNumber << std::endl;
    std::cout << "Course Code   : " << courseCode        << std::endl;
    std::cout << "Date          : " << date               << std::endl;
    std::cout << "Status        : " << status              << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Attendance::getAttendanceId() const
{
    return attendanceId;
}

std::string Attendance::getStudentRollNumber() const
{
    return studentRollNumber;
}

std::string Attendance::getCourseCode() const
{
    return courseCode;
}

std::string Attendance::getDate() const
{
    return date;
}

std::string Attendance::getStatus() const
{
    return status;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Attendance::setAttendanceId(const std::string& attendanceId)
{
    this->attendanceId = attendanceId;
}

void Attendance::setStudentRollNumber(const std::string& studentRollNumber)
{
    this->studentRollNumber = studentRollNumber;
}

void Attendance::setCourseCode(const std::string& courseCode)
{
    this->courseCode = courseCode;
}

void Attendance::setDate(const std::string& date)
{
    this->date = date;
}

void Attendance::setStatus(const std::string& status)
{
    this->status = status;
}