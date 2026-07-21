#ifndef TEACHERMANAGER_H
#define TEACHERMANAGER_H

#include "Teacher.h"
#include <vector>
#include <string>

// ================================================================
// Class: TeacherManager
// ----------------------------------------------------------------
// Manages a collection of Teacher objects in memory for the
// UniSphere system. Does not inherit from any class - its only
// job is to add, remove, search, and display teachers.
// Everything is stored in memory for now, file handling will be
// added later.
// ================================================================
class TeacherManager
{
private:
    std::vector<Teacher> teachers;  // In-memory collection of teachers

public:
    // Constructor
    TeacherManager();

    // Destructor
    ~TeacherManager();

    // Adds a new teacher to the collection
    void addTeacher(const Teacher& teacher);

    // Removes a teacher by teacher ID, returns true if removed
    bool removeTeacher(const std::string& teacherId);

    // Searches for a teacher by teacher ID, returns nullptr if not found
    Teacher* searchTeacher(const std::string& teacherId);

    // Displays every teacher currently in the collection
    void displayAllTeachers() const;

    // Returns how many teachers are currently being managed
    int getTotalTeachers() const;
};

#endif // TEACHERMANAGER_H