#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <string>

// ================================================================
// Class: Timetable
// ----------------------------------------------------------------
// Represents a single scheduled class slot in the UniSphere system.
// This is a standalone class (does not inherit from Person) since
// a timetable entry is not a "person" - it is an entity that links
// a course to a specific day, time, and room.
//
// Future versions will connect Timetable to:
// - Student   (via Student::viewTimetable(), showing all slots for
//              the courses a student is enrolled in)
// - Teacher   (via Teacher::viewSchedule(), showing all slots for
//              the courses a teacher teaches)
// - Course    (via courseCode, matching Course::getCourseCode())
// - Attendance (attendance sessions will correspond to scheduled
//              timetable slots)
// - Database  (timetable entries will eventually be stored/queried
//              from a proper database table instead of in-memory
//              objects)
// - File Handling (timetable entries will be saved/loaded from
//              disk, e.g. one line per record in a .txt/.csv file)
//
// For now, Timetable only stores its own data as plain strings and
// provides simple get/set/display behavior. The link to Course is
// intentionally left as a plain string field (courseCode) rather
// than an object reference, so this class stays independent and
// lightweight until the integration layer is built.
// ================================================================
class Timetable
{
private:
    std::string timetableId;  // Unique identifier for this schedule entry
    std::string courseCode;   // Links to Course::getCourseCode()
    std::string day;          // Day of the week (e.g. "Monday")
    std::string time;         // Time slot (e.g. "10:00 AM - 11:00 AM")
    std::string roomNumber;   // Room where the class is held

public:
    // Default constructor
    Timetable();

    // Parameterized constructor
    Timetable(const std::string& timetableId,
              const std::string& courseCode,
              const std::string& day,
              const std::string& time,
              const std::string& roomNumber);

    // Destructor
    ~Timetable();

    // Sets/updates all timetable data at once
    void setTimetableData(const std::string& timetableId,
                           const std::string& courseCode,
                           const std::string& day,
                           const std::string& time,
                           const std::string& roomNumber);

    // Displays the timetable entry's information
    void displayTimetable() const;

    // Getters
    std::string getTimetableId() const;
    std::string getCourseCode() const;
    std::string getDay() const;
    std::string getTime() const;
    std::string getRoomNumber() const;

    // Setters
    void setTimetableId(const std::string& timetableId);
    void setCourseCode(const std::string& courseCode);
    void setDay(const std::string& day);
    void setTime(const std::string& time);
    void setRoomNumber(const std::string& roomNumber);
};

#endif // TIMETABLE_H