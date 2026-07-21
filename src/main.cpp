// ================================================================
// UniSphere - Smart Campus Management System
// ----------------------------------------------------------------
// main.cpp
//
// This file contains ONLY the console navigation layer:
// menus, screen flow, and calls into the already-existing
// Person/Student/Teacher/Admin classes.
//
// No authentication, file handling, database, or GUI logic
// lives here yet - those will be added in later versions.
// This file must not require any changes to the existing classes.
// ================================================================

#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Admin.h"
#include <iostream>
#include <limits>

// ----------------------------------------------------------------
// Function declarations (modular structure, defined below main)
// ----------------------------------------------------------------
void displayWelcome();
void showMainMenu();
void showAbout();
void loginMenu();
void studentDashboard(Student& student);
void teacherDashboard(Teacher& teacher);
void adminDashboard(Admin& admin);
void pauseScreen();
void exitApplication();
int getValidatedChoice(int minOption, int maxOption);

// ================================================================
// main()
// ----------------------------------------------------------------
// Entry point. Shows the welcome screen once, then keeps the
// Main Menu running until the user chooses to exit.
// ================================================================
int main()
{
    displayWelcome();

    bool applicationRunning = true;

    while (applicationRunning)
    {
        showMainMenu();
        int choice = getValidatedChoice(1, 3);

        switch (choice)
        {
        case 1:
            loginMenu();
            break;

        case 2:
            showAbout();
            break;

        case 3:
            applicationRunning = false;
            break;

        default:
            // getValidatedChoice() already guarantees a valid range,
            // this case exists only as a safety net.
            std::cout << "Invalid option." << std::endl;
            break;
        }
    }

    exitApplication();
    return 0;
}

// ================================================================
// displayWelcome()
// ----------------------------------------------------------------
// Shown once when the program starts.
// ================================================================
void displayWelcome()
{
    std::cout << "==========================================" << std::endl;
    std::cout << "     Welcome to UniSphere" << std::endl;
    std::cout << "     Smart Campus Management System" << std::endl;
    std::cout << "==========================================" << std::endl;
    pauseScreen();
}

// ================================================================
// showMainMenu()
// ----------------------------------------------------------------
// Displays the top-level menu. This is the "hub" screen that
// every other part of the program eventually returns to.
// ================================================================
void showMainMenu()
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

// ================================================================
// showAbout()
// ----------------------------------------------------------------
// Simple informational screen about the project.
// ================================================================
void showAbout()
{
    std::cout << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "                 About" << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "UniSphere is a Smart Campus Management" << std::endl;
    std::cout << "System built using modern C++17 and clean" << std::endl;
    std::cout << "Object-Oriented Design." << std::endl;
    std::cout << "Version: 1.0 (Console, in development)" << std::endl;
    pauseScreen();
}

// ================================================================
// loginMenu()
// ----------------------------------------------------------------
// Lets the user pick a role to log in as. Since there is no real
// authentication yet, a single dummy object is created for the
// chosen role and its dashboard is opened directly.
// ================================================================
void loginMenu()
{
    bool inLoginMenu = true;

    while (inLoginMenu)
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

        int choice = getValidatedChoice(1, 4);

        switch (choice)
        {
        case 1:
        {
            // Dummy Student object - real authentication will
            // replace this in a later version.
            Student student("P100", "Ali Raza", "ali@example.com",
                             "03001234567", "pass123",
                             "S2023-001", "Computer Science", 4, 3.75);
            studentDashboard(student);
            break;
        }

        case 2:
        {
            // Dummy Teacher object - placeholder until real
            // authentication is implemented.
            Teacher teacher("P200", "Sara Khan", "sara@example.com",
                             "03007654321", "pass456",
                             "T2023-001", "Computer Science",
                             "Artificial Intelligence", "Lecturer");
            teacherDashboard(teacher);
            break;
        }

        case 3:
        {
            // Dummy Admin object - placeholder until real
            // authentication is implemented.
            Admin admin("P300", "Usman Tariq", "usman@example.com",
                         "03009876543", "pass789",
                         "A2023-001", "System Administrator",
                         "Main Office");
            adminDashboard(admin);
            break;
        }

        case 4:
            inLoginMenu = false; // Back to Main Menu
            break;

        default:
            std::cout << "Invalid option." << std::endl;
            break;
        }
    }
}

// ================================================================
// studentDashboard()
// ----------------------------------------------------------------
// Menu shown after a student "logs in". Calls the placeholder
// member functions already defined in the Student class.
// ================================================================
void studentDashboard(Student& student)
{
    bool inDashboard = true;

    while (inDashboard)
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

        int choice = getValidatedChoice(1, 6);

        switch (choice)
        {
        case 1:
            student.viewProfile();
            pauseScreen();
            break;

        case 2:
            student.viewAttendance();
            pauseScreen();
            break;

        case 3:
            student.viewResult();
            pauseScreen();
            break;

        case 4:
            student.viewFeeStatus();
            pauseScreen();
            break;

        case 5:
            student.viewTimetable();
            pauseScreen();
            break;

        case 6:
            std::cout << "Logging out..." << std::endl;
            inDashboard = false; // Back to Login Menu
            break;

        default:
            std::cout << "Invalid option." << std::endl;
            break;
        }
    }
}

// ================================================================
// teacherDashboard()
// ----------------------------------------------------------------
// Menu shown after a teacher "logs in". Calls the placeholder
// member functions already defined in the Teacher class.
// ================================================================
void teacherDashboard(Teacher& teacher)
{
    bool inDashboard = true;

    while (inDashboard)
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

        int choice = getValidatedChoice(1, 6);

        switch (choice)
        {
        case 1:
            teacher.viewProfile();
            pauseScreen();
            break;

        case 2:
            teacher.manageAttendance();
            pauseScreen();
            break;

        case 3:
            teacher.uploadResult();
            pauseScreen();
            break;

        case 4:
            teacher.assignCourse();
            pauseScreen();
            break;

        case 5:
            teacher.viewSchedule();
            pauseScreen();
            break;

        case 6:
            std::cout << "Logging out..." << std::endl;
            inDashboard = false; // Back to Login Menu
            break;

        default:
            std::cout << "Invalid option." << std::endl;
            break;
        }
    }
}

// ================================================================
// adminDashboard()
// ----------------------------------------------------------------
// Menu shown after an admin "logs in". Calls the placeholder
// member functions already defined in the Admin class.
// ================================================================
void adminDashboard(Admin& admin)
{
    bool inDashboard = true;

    while (inDashboard)
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

        int choice = getValidatedChoice(1, 8);

        switch (choice)
        {
        case 1:
            admin.viewProfile();
            pauseScreen();
            break;

        case 2:
            admin.addStudent();
            pauseScreen();
            break;

        case 3:
            admin.removeStudent();
            pauseScreen();
            break;

        case 4:
            admin.addTeacher();
            pauseScreen();
            break;

        case 5:
            admin.removeTeacher();
            pauseScreen();
            break;

        case 6:
            admin.manageDepartments();
            pauseScreen();
            break;

        case 7:
            admin.generateReports();
            pauseScreen();
            break;

        case 8:
            std::cout << "Logging out..." << std::endl;
            inDashboard = false; // Back to Login Menu
            break;

        default:
            std::cout << "Invalid option." << std::endl;
            break;
        }
    }
}

// ================================================================
// pauseScreen()
// ----------------------------------------------------------------
// Simple "Press Enter to continue..." pause so the user has time
// to read output before the next menu is displayed.
// ================================================================
void pauseScreen()
{
    std::cout << std::endl << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

// ================================================================
// exitApplication()
// ----------------------------------------------------------------
// Final message shown just before the program closes.
// ================================================================
void exitApplication()
{
    std::cout << std::endl;
    std::cout << "==========================================" << std::endl;
    std::cout << "  Thank you for using UniSphere. Goodbye!" << std::endl;
    std::cout << "==========================================" << std::endl;
}

// ================================================================
// getValidatedChoice()
// ----------------------------------------------------------------
// Reads an integer menu choice from the user and keeps asking
// until the input is a valid integer within [minOption, maxOption].
// Centralizing this logic keeps every menu's input handling
// consistent (rejects letters, symbols, and out-of-range numbers).
// ================================================================
int getValidatedChoice(int minOption, int maxOption)
{
    int choice = 0;

    while (true)
    {
        std::cin >> choice;

        if (std::cin.fail())
        {
            // Non-numeric input was entered; clear the error state
            // and discard the rest of the invalid line.
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a number: ";
            continue;
        }

        // Discard the leftover newline so pauseScreen()'s
        // std::cin.get() works correctly afterwards.
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if (choice < minOption || choice > maxOption)
        {
            std::cout << "Please enter a number between "
                      << minOption << " and " << maxOption << ": ";
            continue;
        }

        return choice;
    }
}