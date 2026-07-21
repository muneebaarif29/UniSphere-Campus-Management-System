#ifndef TEACHER_H
#define TEACHER_H

#include "Person.h"
#include <string>

// ================================================================
// Class: Teacher
// ----------------------------------------------------------------
// Represents a teacher in the UniSphere system.
// Publicly inherits from Person, reusing all identity/account
// data (name, email, phone, password, personId) and adding
// teacher-specific professional data on top of it.
//
// Future versions will connect manageAttendance(), uploadResult(),
// assignCourse() and viewSchedule() to real Attendance, Result,
// Course and Timetable classes (file/database backed). For now
// they are placeholders that keep the class ready for that
// expansion.
// ================================================================
class Teacher : public Person
{
private:
    std::string teacherId;        // Unique teacher identifier
    std::string department;       // Department the teacher belongs to
    std::string specialization;   // Subject/area of expertise
    std::string designation;      // Job title (e.g. Lecturer, Professor)

public:
    // Default constructor
    Teacher();

    // Parameterized constructor
    Teacher(const std::string& personId,
            const std::string& name,
            const std::string& email,
            const std::string& phone,
            const std::string& password,
            const std::string& teacherId,
            const std::string& department,
            const std::string& specialization,
            const std::string& designation);

    // Virtual destructor
    virtual ~Teacher();

    // Sets/updates all teacher-specific data at once
    void setTeacherData(const std::string& teacherId,
                         const std::string& department,
                         const std::string& specialization,
                         const std::string& designation);

    // Displays teacher-specific data only (does not repeat Person data)
    void displayTeacherData() const;

    // Displays the teacher's full profile (Person + Teacher data)
    void viewProfile() const;

    // Placeholder: will later connect to the Attendance module
    void manageAttendance() const;

    // Placeholder: will later connect to the Result module
    void uploadResult() const;

    // Placeholder: will later connect to the Course module
    void assignCourse() const;

    // Placeholder: will later connect to the Timetable module
    void viewSchedule() const;

    // Getters
    std::string getTeacherId() const;
    std::string getDepartment() const;
    std::string getSpecialization() const;
    std::string getDesignation() const;

    // Setters
    void setTeacherId(const std::string& teacherId);
    void setDepartment(const std::string& department);
    void setSpecialization(const std::string& specialization);
    void setDesignation(const std::string& designation);
};

#endif // TEACHER_H