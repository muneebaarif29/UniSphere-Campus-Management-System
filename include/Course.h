#ifndef COURSE_H
#define COURSE_H

#include <string>

// ================================================================
// Class: Course
// ----------------------------------------------------------------
// Represents a single academic course in the UniSphere system.
// This is a standalone class (does not inherit from Person) since
// a course is not a "person" - it is an entity that Students and
// Teachers will later be linked to.
//
// Future versions will connect Course to:
// - Student   (courses a student is enrolled in)
// - Teacher   (via assignCourse(), courses a teacher teaches)
// - Attendance (attendance is recorded per course)
// - Result     (results are recorded per course)
// - Timetable  (each course occupies time slots)
//
// For now, Course only stores its own basic data and the name of
// the teacher assigned to it (a simple string link, to be replaced
// later by a proper reference/ID-based relationship once file
// handling and/or a database layer is introduced).
// ================================================================
class Course
{
private:
    std::string courseCode;   // Unique course identifier (e.g. "CS101")
    std::string courseName;   // Full name of the course
    int creditHours;          // Number of credit hours for the course
    std::string teacherName;  // Name of the teacher currently assigned

public:
    // Default constructor
    Course();

    // Parameterized constructor
    Course(const std::string& courseCode,
           const std::string& courseName,
           int creditHours,
           const std::string& teacherName);

    // Destructor
    ~Course();

    // Sets/updates all course data at once
    void setCourseData(const std::string& courseCode,
                        const std::string& courseName,
                        int creditHours,
                        const std::string& teacherName);

    // Displays the course's information
    void displayCourse() const;

    // Getters
    std::string getCourseCode() const;
    std::string getCourseName() const;
    int getCreditHours() const;
    std::string getTeacherName() const;

    // Setters
    void setCourseCode(const std::string& courseCode);
    void setCourseName(const std::string& courseName);
    void setCreditHours(int creditHours);
    void setTeacherName(const std::string& teacherName);
};

#endif // COURSE_H