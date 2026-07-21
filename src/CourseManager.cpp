#include "CourseManager.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// Vector starts empty, nothing else needs to be set up.
// ----------------------------------------------------------------
CourseManager::CourseManager()
{
}

// ----------------------------------------------------------------
// Destructor
// std::vector cleans itself up, so nothing to do here.
// ----------------------------------------------------------------
CourseManager::~CourseManager()
{
}

// ----------------------------------------------------------------
// addCourse()
// Adds a new Course to the end of the collection.
// ----------------------------------------------------------------
void CourseManager::addCourse(const Course& course)
{
    courses.push_back(course);
}

// ----------------------------------------------------------------
// removeCourse()
// Looks through the collection for a matching course code.
// If found, removes it and returns true, otherwise returns false.
// ----------------------------------------------------------------
bool CourseManager::removeCourse(const std::string& courseCode)
{
    for (std::size_t i = 0; i < courses.size(); i++)
    {
        if (courses[i].getCourseCode() == courseCode)
        {
            courses.erase(courses.begin() + i);
            return true;
        }
    }

    return false;
}

// ----------------------------------------------------------------
// searchCourse()
// Looks through the collection for a matching course code and
// returns a pointer to it, or nullptr if no match is found.
// ----------------------------------------------------------------
Course* CourseManager::searchCourse(const std::string& courseCode)
{
    for (std::size_t i = 0; i < courses.size(); i++)
    {
        if (courses[i].getCourseCode() == courseCode)
        {
            return &courses[i];
        }
    }

    return nullptr;
}

// ----------------------------------------------------------------
// displayAllCourses()
// Prints the details of every course in the collection.
// Reuses Course::displayCourse() instead of printing fields again.
// ----------------------------------------------------------------
void CourseManager::displayAllCourses() const
{
    if (courses.empty())
    {
        std::cout << "No courses found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < courses.size(); i++)
    {
        std::cout << "------------------------------------------" << std::endl;
        courses[i].displayCourse();
    }
}

// ----------------------------------------------------------------
// getTotalCourses()
// Returns the current number of courses being managed.
// ----------------------------------------------------------------
int CourseManager::getTotalCourses() const
{
    return static_cast<int>(courses.size());
}