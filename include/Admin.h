#ifndef ADMIN_H
#define ADMIN_H

#include "Person.h"
#include <string>

// ================================================================
// Class: Admin
// ----------------------------------------------------------------
// Represents an administrator in the UniSphere system.
// Publicly inherits from Person, reusing all identity/account
// data (name, email, phone, password, personId) and adding
// admin-specific management data on top of it.
//
// Future versions will connect addStudent(), removeStudent(),
// addTeacher(), removeTeacher(), manageDepartments() and
// generateReports() to real Student/Teacher/Department/Reports
// modules (file/database backed). For now they are placeholders
// that keep the class ready for that expansion.
// ================================================================
class Admin : public Person
{
private:
    std::string adminId;  // Unique administrator identifier
    std::string role;     // Administrative role (e.g. Registrar, IT Admin)
    std::string office;   // Office/department the admin operates from

public:
    // Default constructor
    Admin();

    // Parameterized constructor
    Admin(const std::string& personId,
          const std::string& name,
          const std::string& email,
          const std::string& phone,
          const std::string& password,
          const std::string& adminId,
          const std::string& role,
          const std::string& office);

    // Virtual destructor
    virtual ~Admin();

    // Sets/updates all admin-specific data at once
    void setAdminData(const std::string& adminId,
                       const std::string& role,
                       const std::string& office);

    // Displays admin-specific data only (does not repeat Person data)
    void displayAdminData() const;

    // Displays the admin's full profile (Person + Admin data)
    void viewProfile() const;

    // Placeholder: will later connect to the Student module
    void addStudent() const;

    // Placeholder: will later connect to the Student module
    void removeStudent() const;

    // Placeholder: will later connect to the Teacher module
    void addTeacher() const;

    // Placeholder: will later connect to the Teacher module
    void removeTeacher() const;

    // Placeholder: will later connect to the Department module
    void manageDepartments() const;

    // Placeholder: will later connect to the Reports module
    void generateReports() const;

    // Getters
    std::string getAdminId() const;
    std::string getRole() const;
    std::string getOffice() const;

    // Setters
    void setAdminId(const std::string& adminId);
    void setRole(const std::string& role);
    void setOffice(const std::string& office);
};

#endif // ADMIN_H