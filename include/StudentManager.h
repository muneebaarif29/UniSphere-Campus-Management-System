#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include "Student.h"
#include <vector>
#include <string>

// ================================================================
// Class: StudentManager
// ----------------------------------------------------------------
// Manages a collection of Student objects in memory for the
// UniSphere system. This is a standalone class (does not inherit
// from any other class) whose only responsibility is to hold,
// add, remove, search, and display Student records.
//
// Future versions will connect StudentManager to:
// - FileManager (Save/Load functions will later read and write
//              student records to disk, restoring this in-memory
//              collection between program runs)
// - Database   (this collection will eventually be backed by a
//              proper database table instead of living only in
//              memory)
// - Admin      (Admin::addStudent()/removeStudent() will later
//              call into this class instead of just printing a
//              placeholder message)
//
// For now, all data lives only in memory for the duration of the
// program, using std::vector<Student> as the underlying storage.
// ================================================================
class StudentManager
{
private:
    std::vector<Student> students;  // In-memory collection of students

public:
    // Constructor
    StudentManager();

    // Destructor
    ~StudentManager();

    // Adds a new student to the collection
    void addStudent(const Student& student);

    // Removes a student by roll number; returns true if found and removed
    bool removeStudent(const std::string& rollNumber);

    // Searches for a student by roll number; returns a pointer to the
    // matching Student, or nullptr if no match is found
    Student* searchStudent(const std::string& rollNumber);

    // Displays the data of every student currently in the collection
    void displayAllStudents() const;

    // Returns the total number of students currently managed
    int getTotalStudents() const;
};

#endif // STUDENTMANAGER_H