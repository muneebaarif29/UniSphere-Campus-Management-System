#ifndef ATTENDANCEMANAGER_H
#define ATTENDANCEMANAGER_H

#include "Attendance.h"
#include <vector>
#include <string>

// ================================================================
// Class: AttendanceManager
// ----------------------------------------------------------------
// Manages a collection of Attendance objects in memory for the
// UniSphere system. Does not inherit from any class - its only
// job is to add, remove, search, and display attendance records.
// Everything is stored in memory for now, file handling will be
// added later.
// ================================================================
class AttendanceManager
{
private:
    std::vector<Attendance> attendanceRecords;  // In-memory collection of attendance records

public:
    // Constructor
    AttendanceManager();

    // Destructor
    ~AttendanceManager();

    // Adds a new attendance record to the collection
    void addAttendance(const Attendance& attendance);

    // Removes an attendance record by attendance ID, returns true if removed
    bool removeAttendance(const std::string& attendanceId);

    // Searches for an attendance record by attendance ID, returns nullptr if not found
    Attendance* searchAttendance(const std::string& attendanceId);

    // Displays every attendance record currently in the collection
    void displayAllAttendance() const;

    // Returns how many attendance records are currently being managed
    int getTotalAttendance() const;
};

#endif // ATTENDANCEMANAGER_H