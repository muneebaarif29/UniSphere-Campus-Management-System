#ifndef COURSEMANAGER_H
#define COURSEMANAGER_H

#include "Course.h"
#include <vector>
#include <string>

// ================================================================
// Class: CourseManager
// ----------------------------------------------------------------
// Manages a collection of Course objects in memory for the
// UniSphere system. Does not inherit from any class - its only
// job is to add, remove, search, and display courses.
// Everything is stored in memory for now, file handling will be
// added later.
// ================================================================
class CourseManager
{
private:
    std::vector<Course> courses;  // In-memory collection of courses

public:
    // Constructor
    CourseManager();

    // Destructor
    ~CourseManager();

    // Adds a new course to the collection
    void addCourse(const Course& course);

    // Removes a course by course code, returns true if removed
    bool removeCourse(const std::string& courseCode);

    // Searches for a course by course code, returns nullptr if not found
    Course* searchCourse(const std::string& courseCode);

    // Displays every course currently in the collection
    void displayAllCourses() const;

    // Returns how many courses are currently being managed
    int getTotalCourses() const;
};

#endif // COURSEMANAGER_H