#ifndef ATTENDANCE_H
#define ATTENDANCE_H

#include <string>

// ================================================================
// Class: Attendance
// ----------------------------------------------------------------
// Represents a single attendance record in the UniSphere system.
// This is a standalone class (does not inherit from Person) since
// an attendance record is not a "person" - it is an entity that
// links a student to a course on a specific date.
//
// Future versions will connect Attendance to:
// - Student   (via studentRollNumber, matching Student::getRollNumber())
// - Teacher   (the teacher marking/managing attendance, through
//              Teacher::manageAttendance())
// - Course    (via courseCode, matching Course::getCourseCode())
// - File Handling (attendance records will be saved/loaded from
//              disk, e.g. one line per record in a .txt/.csv file)
// - Database  (records will eventually be stored/queried from a
//              proper database table instead of in-memory objects)
//
// For now, Attendance only stores its own data as plain strings
// and provides simple get/set/display behavior. The links above
// are intentionally left as plain string fields (studentRollNumber,
// courseCode) rather than object references, so this class stays
// independent and lightweight until the integration layer is built.
// ================================================================
class Attendance
{
private:
    std::string attendanceId;      // Unique identifier for this record
    std::string studentRollNumber; // Links to Student::getRollNumber()
    std::string courseCode;        // Links to Course::getCourseCode()
    std::string date;              // Date of the attendance record
    std::string status;            // "Present", "Absent", or "Leave"

public:
    // Default constructor
    Attendance();

    // Parameterized constructor
    Attendance(const std::string& attendanceId,
               const std::string& studentRollNumber,
               const std::string& courseCode,
               const std::string& date,
               const std::string& status);

    // Destructor
    ~Attendance();

    // Sets/updates all attendance data at once
    void setAttendanceData(const std::string& attendanceId,
                            const std::string& studentRollNumber,
                            const std::string& courseCode,
                            const std::string& date,
                            const std::string& status);

    // Displays the attendance record's information
    void displayAttendance() const;

    // Getters
    std::string getAttendanceId() const;
    std::string getStudentRollNumber() const;
    std::string getCourseCode() const;
    std::string getDate() const;
    std::string getStatus() const;

    // Setters
    void setAttendanceId(const std::string& attendanceId);
    void setStudentRollNumber(const std::string& studentRollNumber);
    void setCourseCode(const std::string& courseCode);
    void setDate(const std::string& date);
    void setStatus(const std::string& status);
};

#endif // ATTENDANCE_H