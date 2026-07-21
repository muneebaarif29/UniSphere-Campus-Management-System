#include "Admin.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Calls Person's default constructor and initializes admin
// fields to safe default (empty) values.
// ----------------------------------------------------------------
Admin::Admin()
    : Person(), adminId(""), role(""), office("")
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Forwards identity/account data to Person's constructor and
// initializes admin-specific fields with the given values.
// ----------------------------------------------------------------
Admin::Admin(const std::string& personId,
             const std::string& name,
             const std::string& email,
             const std::string& phone,
             const std::string& password,
             const std::string& adminId,
             const std::string& role,
             const std::string& office)
    : Person(personId, name, email, phone, password),
      adminId(adminId), role(role), office(office)
{
}

// ----------------------------------------------------------------
// Virtual Destructor
// No dynamic resources to release; Person's destructor handles
// base-class cleanup automatically.
// ----------------------------------------------------------------
Admin::~Admin()
{
}

// ----------------------------------------------------------------
// setAdminData()
// Updates all admin-specific fields at once. Person's data is
// left untouched here; use Person::setData() for that.
// ----------------------------------------------------------------
void Admin::setAdminData(const std::string& adminId,
                          const std::string& role,
                          const std::string& office)
{
    this->adminId = adminId;
    this->role = role;
    this->office = office;
}

// ----------------------------------------------------------------
// displayAdminData()
// Prints only the admin-specific fields. Person's data is shown
// separately via Person::displayData() to avoid duplication.
// ----------------------------------------------------------------
void Admin::displayAdminData() const
{
    std::cout << "Admin ID : " << adminId << std::endl;
    std::cout << "Role     : " << role    << std::endl;
    std::cout << "Office   : " << office  << std::endl;
}

// ----------------------------------------------------------------
// viewProfile()
// Combines Person's data and Admin's data into one full profile.
// Reuses displayData() from Person instead of duplicating fields.
// ----------------------------------------------------------------
void Admin::viewProfile() const
{
    std::cout << "----- Admin Profile -----" << std::endl;
    displayData();       // Inherited from Person
    displayAdminData();  // Admin-specific fields
}

// ----------------------------------------------------------------
// addStudent()
// Placeholder for now. Will later connect to the Student module
// so admins can register new students into the system.
// ----------------------------------------------------------------
void Admin::addStudent() const
{
    std::cout << "Module not implemented yet." << std::endl;
}

// ----------------------------------------------------------------
// removeStudent()
// Placeholder for now. Will later connect to the Student module.
// ----------------------------------------------------------------
void Admin::removeStudent() const
{
    std::cout << "Module not implemented yet." << std::endl;
}

// ----------------------------------------------------------------
// addTeacher()
// Placeholder for now. Will later connect to the Teacher module.
// ----------------------------------------------------------------
void Admin::addTeacher() const
{
    std::cout << "Module not implemented yet." << std::endl;
}

// ----------------------------------------------------------------
// removeTeacher()
// Placeholder for now. Will later connect to the Teacher module.
// ----------------------------------------------------------------
void Admin::removeTeacher() const
{
    std::cout << "Module not implemented yet." << std::endl;
}

// ----------------------------------------------------------------
// manageDepartments()
// Placeholder for now. Will later connect to the Department module.
// ----------------------------------------------------------------
void Admin::manageDepartments() const
{
    std::cout << "Module not implemented yet." << std::endl;
}

// ----------------------------------------------------------------
// generateReports()
// Placeholder for now. Will later connect to the Reports module.
// ----------------------------------------------------------------
void Admin::generateReports() const
{
    std::cout << "Module not implemented yet." << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Admin::getAdminId() const
{
    return adminId;
}

std::string Admin::getRole() const
{
    return role;
}

std::string Admin::getOffice() const
{
    return office;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Admin::setAdminId(const std::string& adminId)
{
    this->adminId = adminId;
}

void Admin::setRole(const std::string& role)
{
    this->role = role;
}

void Admin::setOffice(const std::string& office)
{
    this->office = office;
}