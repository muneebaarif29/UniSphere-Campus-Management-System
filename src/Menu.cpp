#include "Utilities/Menu.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// Nothing to set up, this class has no data members.
// ----------------------------------------------------------------
Menu::Menu()
{
}

// ----------------------------------------------------------------
// Destructor
// Nothing to clean up here.
// ----------------------------------------------------------------
Menu::~Menu()
{
}

// ----------------------------------------------------------------
// displayWelcome()
// Shown once when the program first starts.
// ----------------------------------------------------------------
void Menu::displayWelcome()
{
    std::cout << "==========================================" << std::endl;
    std::cout << "     Welcome to UniSphere" << std::endl;
    std::cout << "     Smart Campus Management System" << std::endl;
    std::cout << "==========================================" << std::endl;
}

// ----------------------------------------------------------------
// showMainMenu()
// Top level menu of the whole application.
// ----------------------------------------------------------------
void Menu::showMainMenu()
{
    std::cout << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "               Main Menu" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "1. Login" << std::endl;
    std::cout << "2. About" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Enter your choice: ";
}

// ----------------------------------------------------------------
// showLoginMenu()
// Lets the user pick which role they want to log in as.
// ----------------------------------------------------------------
void Menu::showLoginMenu()
{
    std::cout << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "               Login Menu" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "1. Student Login" << std::endl;
    std::cout << "2. Teacher Login" << std::endl;
    std::cout << "3. Admin Login" << std::endl;
    std::cout << "4. Back" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Enter your choice: ";
}

// ----------------------------------------------------------------
// showStudentMenu()
// Options available once a student has logged in.
// ----------------------------------------------------------------
void Menu::showStudentMenu()
{
    std::cout << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "            Student Dashboard" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "1. View Profile" << std::endl;
    std::cout << "2. View Attendance" << std::endl;
    std::cout << "3. View Result" << std::endl;
    std::cout << "4. View Fee Status" << std::endl;
    std::cout << "5. View Timetable" << std::endl;
    std::cout << "6. Logout" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Enter your choice: ";
}

// ----------------------------------------------------------------
// showTeacherMenu()
// Options available once a teacher has logged in.
// ----------------------------------------------------------------
void Menu::showTeacherMenu()
{
    std::cout << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "            Teacher Dashboard" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "1. View Profile" << std::endl;
    std::cout << "2. Manage Attendance" << std::endl;
    std::cout << "3. Upload Result" << std::endl;
    std::cout << "4. Assign Course" << std::endl;
    std::cout << "5. View Schedule" << std::endl;
    std::cout << "6. Logout" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Enter your choice: ";
}

// ----------------------------------------------------------------
// showAdminMenu()
// Options available once an admin has logged in.
// ----------------------------------------------------------------
void Menu::showAdminMenu()
{
    std::cout << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "             Admin Dashboard" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "1. View Profile" << std::endl;
    std::cout << "2. Add Student" << std::endl;
    std::cout << "3. Remove Student" << std::endl;
    std::cout << "4. Add Teacher" << std::endl;
    std::cout << "5. Remove Teacher" << std::endl;
    std::cout << "6. Manage Departments" << std::endl;
    std::cout << "7. Generate Reports" << std::endl;
    std::cout << "8. Logout" << std::endl;
    std::cout << "------------------------------------------" << std::endl;
    std::cout << "Enter your choice: ";
}