#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include <string>

// ================================================================
// Class: Department
// ----------------------------------------------------------------
// Represents a single academic department in the UniSphere system.
// This is a standalone class (does not inherit from Person) since
// a department is not a "person" - it is an organizational entity
// that Students, Teachers, and Courses belong to.
//
// Future versions will connect Department to:
// - Student   (each student belongs to a department, matching
//              Student::getDepartment())
// - Teacher   (each teacher belongs to a department, matching
//              Teacher::getDepartment())
// - Admin     (via Admin::manageDepartments(), admins will create,
//              update, and remove department records)
// - Course    (each course will eventually be offered under a
//              specific department)
// - Database  (departments will eventually be stored/queried from
//              a proper database table instead of in-memory objects)
// - File Handling (department records will be saved/loaded from
//              disk, e.g. one line per record in a .txt/.csv file)
//
// For now, Department only stores its own basic data and the name
// of its Head of Department as a plain string, and provides simple
// get/set/display behavior. This keeps the class independent and
// lightweight until the integration layer is built.
// ================================================================
class Department
{
private:
    std::string departmentId;    // Unique identifier for the department
    std::string departmentName;  // Full name of the department
    std::string hodName;         // Name of the Head of Department

public:
    // Default constructor
    Department();

    // Parameterized constructor
    Department(const std::string& departmentId,
                const std::string& departmentName,
                const std::string& hodName);

    // Destructor
    ~Department();

    // Sets/updates all department data at once
    void setDepartmentData(const std::string& departmentId,
                            const std::string& departmentName,
                            const std::string& hodName);

    // Displays the department's information
    void displayDepartment() const;

    // Getters
    std::string getDepartmentId() const;
    std::string getDepartmentName() const;
    std::string getHodName() const;

    // Setters
    void setDepartmentId(const std::string& departmentId);
    void setDepartmentName(const std::string& departmentName);
    void setHodName(const std::string& hodName);
};

#endif // DEPARTMENT_H