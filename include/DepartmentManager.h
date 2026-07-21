#ifndef DEPARTMENTMANAGER_H
#define DEPARTMENTMANAGER_H

#include "Department.h"
#include <vector>
#include <string>

// ================================================================
// Class: DepartmentManager
// ----------------------------------------------------------------
// Manages a collection of Department objects in memory for the
// UniSphere system. Does not inherit from any class - its only
// job is to add, remove, search, and display departments.
// Everything is stored in memory for now, file handling will be
// added later.
// ================================================================
class DepartmentManager
{
private:
    std::vector<Department> departments;  // In-memory collection of departments

public:
    // Constructor
    DepartmentManager();

    // Destructor
    ~DepartmentManager();

    // Adds a new department to the collection
    void addDepartment(const Department& department);

    // Removes a department by department ID, returns true if removed
    bool removeDepartment(const std::string& departmentId);

    // Searches for a department by department ID, returns nullptr if not found
    Department* searchDepartment(const std::string& departmentId);

    // Displays every department currently in the collection
    void displayAllDepartments() const;

    // Returns how many departments are currently being managed
    int getTotalDepartments() const;
};

#endif // DEPARTMENTMANAGER_H