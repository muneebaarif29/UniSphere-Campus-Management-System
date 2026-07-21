#include "StudentManager.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// The vector starts empty by default, so nothing extra needs to
// be initialized here.
// ----------------------------------------------------------------
StudentManager::StudentManager()
{
}

// ----------------------------------------------------------------
// Destructor
// std::vector cleans up its own elements automatically, so no
// manual cleanup is required here.
// ----------------------------------------------------------------
StudentManager::~StudentManager()
{
}

// ----------------------------------------------------------------
// addStudent()
// Adds a new Student object to the end of the collection.
// Later, this is where FileManager's Save function will be
// triggered so new students are also written to disk.
// ----------------------------------------------------------------
void StudentManager::addStudent(const Student& student)
{
    students.push_back(student);
}

// ----------------------------------------------------------------
// removeStudent()
// Searches the collection manually (no STL algorithms) for a
// student with the given roll number. If found, that entry is
// erased from the vector and true is returned. If no match is
// found, false is returned and the collection is left unchanged.
// Later, this is where FileManager's Save function will be
// triggered so the removal is also reflected on disk.
// ----------------------------------------------------------------
bool StudentManager::removeStudent(const std::string& rollNumber)
{
    for (std::size_t i = 0; i < students.size(); i++)
    {
        if (students[i].getRollNumber() == rollNumber)
        {
            students.erase(students.begin() + i);
            return true;
        }
    }

    return false;
}

// ----------------------------------------------------------------
// searchStudent()
// Manually scans the collection (no STL algorithms) for a student
// with the given roll number. Returns the address of the matching
// Student so the caller can view or modify it directly, or
// nullptr if no student with that roll number exists.
// ----------------------------------------------------------------
Student* StudentManager::searchStudent(const std::string& rollNumber)
{
    for (std::size_t i = 0; i < students.size(); i++)
    {
        if (students[i].getRollNumber() == rollNumber)
        {
            return &students[i];
        }
    }

    return nullptr;
}

// ----------------------------------------------------------------
// displayAllStudents()
// Prints the profile of every student currently in the collection.
// Reuses Student::viewProfile() instead of duplicating display
// logic here. Later, this is where FileManager's Load function
// will have already populated the collection before this runs.
// ----------------------------------------------------------------
void StudentManager::displayAllStudents() const
{
    if (students.empty())
    {
        std::cout << "No students found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < students.size(); i++)
    {
        std::cout << "------------------------------------------" << std::endl;
        students[i].viewProfile();
    }
}

// ----------------------------------------------------------------
// getTotalStudents()
// Returns the current number of students being managed.
// ----------------------------------------------------------------
int StudentManager::getTotalStudents() const
{
    return static_cast<int>(students.size());
}