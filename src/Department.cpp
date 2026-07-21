#include "Department.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Initializes all fields to empty strings.
// ----------------------------------------------------------------
Department::Department()
    : departmentId(""), departmentName(""), hodName("")
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Initializes a department with the given data.
// ----------------------------------------------------------------
Department::Department(const std::string& departmentId,
                        const std::string& departmentName,
                        const std::string& hodName)
    : departmentId(departmentId), departmentName(departmentName),
      hodName(hodName)
{
}

// ----------------------------------------------------------------
// Destructor
// No dynamic resources to release currently.
// ----------------------------------------------------------------
Department::~Department()
{
}

// ----------------------------------------------------------------
// setDepartmentData()
// Updates all department fields at once. Later, this will be the
// function called after reading a record from a file or database
// row, or after an admin edits a department via
// Admin::manageDepartments().
// ----------------------------------------------------------------
void Department::setDepartmentData(const std::string& departmentId,
                                    const std::string& departmentName,
                                    const std::string& hodName)
{
    this->departmentId = departmentId;
    this->departmentName = departmentName;
    this->hodName = hodName;
}

// ----------------------------------------------------------------
// displayDepartment()
// Prints the department's information to the console.
// Future versions may reuse this inside
// Admin::manageDepartments() once real Department objects are
// connected to the admin dashboard.
// ----------------------------------------------------------------
void Department::displayDepartment() const
{
    std::cout << "Department ID   : " << departmentId   << std::endl;
    std::cout << "Department Name : " << departmentName << std::endl;
    std::cout << "Head of Dept.   : " << hodName         << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Department::getDepartmentId() const
{
    return departmentId;
}

std::string Department::getDepartmentName() const
{
    return departmentName;
}

std::string Department::getHodName() const
{
    return hodName;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Department::setDepartmentId(const std::string& departmentId)
{
    this->departmentId = departmentId;
}

void Department::setDepartmentName(const std::string& departmentName)
{
    this->departmentName = departmentName;
}

void Department::setHodName(const std::string& hodName)
{
    this->hodName = hodName;
}