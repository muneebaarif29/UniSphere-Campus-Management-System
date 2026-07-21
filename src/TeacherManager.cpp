#include "TeacherManager.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// Vector starts empty, nothing else needs to be set up.
// ----------------------------------------------------------------
TeacherManager::TeacherManager()
{
}

// ----------------------------------------------------------------
// Destructor
// std::vector cleans itself up, so nothing to do here.
// ----------------------------------------------------------------
TeacherManager::~TeacherManager()
{
}

// ----------------------------------------------------------------
// addTeacher()
// Adds a new Teacher to the end of the collection.
// ----------------------------------------------------------------
void TeacherManager::addTeacher(const Teacher& teacher)
{
    teachers.push_back(teacher);
}

// ----------------------------------------------------------------
// removeTeacher()
// Looks through the collection for a matching teacher ID.
// If found, removes it and returns true, otherwise returns false.
// ----------------------------------------------------------------
bool TeacherManager::removeTeacher(const std::string& teacherId)
{
    for (std::size_t i = 0; i < teachers.size(); i++)
    {
        if (teachers[i].getTeacherId() == teacherId)
        {
            teachers.erase(teachers.begin() + i);
            return true;
        }
    }

    return false;
}

// ----------------------------------------------------------------
// searchTeacher()
// Looks through the collection for a matching teacher ID and
// returns a pointer to it, or nullptr if no match is found.
// ----------------------------------------------------------------
Teacher* TeacherManager::searchTeacher(const std::string& teacherId)
{
    for (std::size_t i = 0; i < teachers.size(); i++)
    {
        if (teachers[i].getTeacherId() == teacherId)
        {
            return &teachers[i];
        }
    }

    return nullptr;
}

// ----------------------------------------------------------------
// displayAllTeachers()
// Prints the profile of every teacher in the collection.
// Reuses Teacher::viewProfile() instead of printing fields again.
// ----------------------------------------------------------------
void TeacherManager::displayAllTeachers() const
{
    if (teachers.empty())
    {
        std::cout << "No teachers found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < teachers.size(); i++)
    {
        std::cout << "------------------------------------------" << std::endl;
        teachers[i].viewProfile();
    }
}

// ----------------------------------------------------------------
// getTotalTeachers()
// Returns the current number of teachers being managed.
// ----------------------------------------------------------------
int TeacherManager::getTotalTeachers() const
{
    return static_cast<int>(teachers.size());
}