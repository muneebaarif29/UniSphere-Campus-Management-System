#include "Timetable.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Initializes all fields to empty strings.
// ----------------------------------------------------------------
Timetable::Timetable()
    : timetableId(""), courseCode(""), day(""), time(""), roomNumber("")
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Initializes a timetable entry with the given data.
// ----------------------------------------------------------------
Timetable::Timetable(const std::string& timetableId,
                      const std::string& courseCode,
                      const std::string& day,
                      const std::string& time,
                      const std::string& roomNumber)
    : timetableId(timetableId), courseCode(courseCode),
      day(day), time(time), roomNumber(roomNumber)
{
}

// ----------------------------------------------------------------
// Destructor
// No dynamic resources to release currently.
// ----------------------------------------------------------------
Timetable::~Timetable()
{
}

// ----------------------------------------------------------------
// setTimetableData()
// Updates all timetable fields at once. Later, this will be the
// function called after reading a record from a file or database
// row, or after an admin/teacher schedules a class slot.
// ----------------------------------------------------------------
void Timetable::setTimetableData(const std::string& timetableId,
                                  const std::string& courseCode,
                                  const std::string& day,
                                  const std::string& time,
                                  const std::string& roomNumber)
{
    this->timetableId = timetableId;
    this->courseCode = courseCode;
    this->day = day;
    this->time = time;
    this->roomNumber = roomNumber;
}

// ----------------------------------------------------------------
// displayTimetable()
// Prints the timetable entry's information to the console.
// Future versions may reuse this inside Student::viewTimetable()
// and Teacher::viewSchedule() once real Timetable objects are
// connected to students and teachers.
// ----------------------------------------------------------------
void Timetable::displayTimetable() const
{
    std::cout << "Timetable ID : " << timetableId << std::endl;
    std::cout << "Course Code  : " << courseCode  << std::endl;
    std::cout << "Day          : " << day          << std::endl;
    std::cout << "Time         : " << time          << std::endl;
    std::cout << "Room Number  : " << roomNumber   << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Timetable::getTimetableId() const
{
    return timetableId;
}

std::string Timetable::getCourseCode() const
{
    return courseCode;
}

std::string Timetable::getDay() const
{
    return day;
}

std::string Timetable::getTime() const
{
    return time;
}

std::string Timetable::getRoomNumber() const
{
    return roomNumber;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Timetable::setTimetableId(const std::string& timetableId)
{
    this->timetableId = timetableId;
}

void Timetable::setCourseCode(const std::string& courseCode)
{
    this->courseCode = courseCode;
}

void Timetable::setDay(const std::string& day)
{
    this->day = day;
}

void Timetable::setTime(const std::string& time)
{
    this->time = time;
}

void Timetable::setRoomNumber(const std::string& roomNumber)
{
    this->roomNumber = roomNumber;
}