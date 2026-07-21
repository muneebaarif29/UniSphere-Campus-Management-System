#include "AttendanceManager.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// Vector starts empty, nothing else needs to be set up.
// ----------------------------------------------------------------
AttendanceManager::AttendanceManager()
{
}

// ----------------------------------------------------------------
// Destructor
// std::vector cleans itself up, so nothing to do here.
// ----------------------------------------------------------------
AttendanceManager::~AttendanceManager()
{
}

// ----------------------------------------------------------------
// addAttendance()
// Adds a new Attendance record to the end of the collection.
// ----------------------------------------------------------------
void AttendanceManager::addAttendance(const Attendance& attendance)
{
    attendanceRecords.push_back(attendance);
}

// ----------------------------------------------------------------
// removeAttendance()
// Looks through the collection for a matching attendance ID.
// If found, removes it and returns true, otherwise returns false.
// ----------------------------------------------------------------
bool AttendanceManager::removeAttendance(const std::string& attendanceId)
{
    for (std::size_t i = 0; i < attendanceRecords.size(); i++)
    {
        if (attendanceRecords[i].getAttendanceId() == attendanceId)
        {
            attendanceRecords.erase(attendanceRecords.begin() + i);
            return true;
        }
    }

    return false;
}

// ----------------------------------------------------------------
// searchAttendance()
// Looks through the collection for a matching attendance ID and
// returns a pointer to it, or nullptr if no match is found.
// ----------------------------------------------------------------
Attendance* AttendanceManager::searchAttendance(const std::string& attendanceId)
{
    for (std::size_t i = 0; i < attendanceRecords.size(); i++)
    {
        if (attendanceRecords[i].getAttendanceId() == attendanceId)
        {
            return &attendanceRecords[i];
        }
    }

    return nullptr;
}

// ----------------------------------------------------------------
// displayAllAttendance()
// Prints the details of every attendance record in the collection.
// Reuses Attendance::displayAttendance() instead of printing
// fields again.
// ----------------------------------------------------------------
void AttendanceManager::displayAllAttendance() const
{
    if (attendanceRecords.empty())
    {
        std::cout << "No attendance records found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < attendanceRecords.size(); i++)
    {
        std::cout << "------------------------------------------" << std::endl;
        attendanceRecords[i].displayAttendance();
    }
}

// ----------------------------------------------------------------
// getTotalAttendance()
// Returns the current number of attendance records being managed.
// ----------------------------------------------------------------
int AttendanceManager::getTotalAttendance() const
{
    return static_cast<int>(attendanceRecords.size());
}