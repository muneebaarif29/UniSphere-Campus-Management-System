#include "DepartmentManager.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// Vector starts empty, nothing else needs to be set up.
// ----------------------------------------------------------------
DepartmentManager::DepartmentManager()
{
}

// ----------------------------------------------------------------
// Destructor
// std::vector cleans itself up, so nothing to do here.
// ----------------------------------------------------------------
DepartmentManager::~DepartmentManager()
{
}

// ----------------------------------------------------------------
// addDepartment()
// Adds a new Department to the end of the collection.
// ----------------------------------------------------------------
void DepartmentManager::addDepartment(const Department& department)
{
    departments.push_back(department);
}

// ----------------------------------------------------------------
// removeDepartment()
// Looks through the collection for a matching department ID.
// If found, removes it and returns true, otherwise returns false.
// ----------------------------------------------------------------
bool DepartmentManager::removeDepartment(const std::string& departmentId)
{
    for (std::size_t i = 0; i < departments.size(); i++)
    {
        if (departments[i].getDepartmentId() == departmentId)
        {
            departments.erase(departments.begin() + i);
            return true;
        }
    }

    return false;
}

// ----------------------------------------------------------------
// searchDepartment()
// Looks through the collection for a matching department ID and
// returns a pointer to it, or nullptr if no match is found.
// ----------------------------------------------------------------
Department* DepartmentManager::searchDepartment(const std::string& departmentId)
{
    for (std::size_t i = 0; i < departments.size(); i++)
    {
        if (departments[i].getDepartmentId() == departmentId)
        {
            return &departments[i];
        }
    }

    return nullptr;
}

// ----------------------------------------------------------------
// displayAllDepartments()
// Prints the details of every department in the collection.
// Reuses Department::displayDepartment() instead of printing
// fields again.
// ----------------------------------------------------------------
void DepartmentManager::displayAllDepartments() const
{
    if (departments.empty())
    {
        std::cout << "No departments found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < departments.size(); i++)
    {
        std::cout << "------------------------------------------" << std::endl;
        departments[i].displayDepartment();
    }
}

// ----------------------------------------------------------------
// getTotalDepartments()
// Returns the current number of departments being managed.
// ----------------------------------------------------------------
int DepartmentManager::getTotalDepartments() const
{
    return static_cast<int>(departments.size());
}