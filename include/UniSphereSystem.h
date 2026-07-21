#ifndef UNISPHERESYSTEM_H
#define UNISPHERESYSTEM_H

#include "Menu.h"
#include "InputHelper.h"
#include "ConsoleHelper.h"
#include "FileManager.h"

#include "StudentManager.h"
#include "TeacherManager.h"
#include "CourseManager.h"
#include "DepartmentManager.h"
#include "AttendanceManager.h"
#include "ResultManager.h"
#include "FeeManager.h"
#include "TimetableManager.h"
#include "AuthenticationManager.h"

// ================================================================
// Class: UniSphereSystem
// ----------------------------------------------------------------
// This is the top level class that ties the whole UniSphere
// application together. It owns all the manager objects, along
// with the Menu, InputHelper, ConsoleHelper, and FileManager
// helpers, and controls the overall program flow.
//
// For now, the dashboard/login functions only display menus and
// print placeholder messages. Real login checks, CRUD operations,
// and file handling will be added in later versions.
// ================================================================
class UniSphereSystem
{
private:
    // Manager objects owned by the system
    StudentManager studentManager;
    TeacherManager teacherManager;
    CourseManager courseManager;
    DepartmentManager departmentManager;
    AttendanceManager attendanceManager;
    ResultManager resultManager;
    FeeManager feeManager;
    TimetableManager timetableManager;
    AuthenticationManager authManager;

    // Helper objects used across the system
    Menu menu;
    InputHelper inputHelper;
    ConsoleHelper consoleHelper;
    FileManager fileManager;

    // Keeps the main application loop running until Exit is chosen
    bool isRunning;

public:
    // Constructor
    UniSphereSystem();

    // Destructor
    ~UniSphereSystem();

    // Starts the whole application (main entry point of the system)
    void start();

    // Displays and handles the main menu
    void showMainMenu();

    // Handles the login process (placeholder for now)
    void login();

    // Handles logging out (placeholder for now)
    void logout();

    // Displays the student dashboard (placeholder for now)
    void showStudentDashboard();

    // Displays the teacher dashboard (placeholder for now)
    void showTeacherDashboard();

    // Displays the admin dashboard (placeholder for now)
    void showAdminDashboard();
};

#endif // UNISPHERESYSTEM_H