#include "UniSphereSystem.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// The manager and helper objects build themselves automatically,
// we just need to set the running flag to false to start with.
// ----------------------------------------------------------------
UniSphereSystem::UniSphereSystem()
    : isRunning(false)
{
}

// ----------------------------------------------------------------
// Destructor
// Nothing to clean up here, all members clean themselves up.
// ----------------------------------------------------------------
UniSphereSystem::~UniSphereSystem()
{
}

// ----------------------------------------------------------------
// start()
// Entry point of the whole application. Shows the welcome screen
// once, then keeps showing the main menu until the user exits.
// ----------------------------------------------------------------
void UniSphereSystem::start()
{
    menu.displayWelcome();
    consoleHelper.pauseScreen();

    isRunning = true;

    while (isRunning)
    {
        showMainMenu();
    }

    std::cout << std::endl;
    std::cout << "Thank you for using UniSphere. Goodbye!" << std::endl;
}

// ----------------------------------------------------------------
// showMainMenu()
// Displays the main menu and handles one selection at a time.
// This is just the navigation skeleton for now, real logic will
// be added once the other parts of the system are connected.
// ----------------------------------------------------------------
void UniSphereSystem::showMainMenu()
{
    menu.showMainMenu();
    int choice = inputHelper.getInteger(1, 3);

    switch (choice)
    {
    case 1:
        login();
        break;

    case 2:
        std::cout << "About: UniSphere Smart Campus Management System." << std::endl;
        consoleHelper.pauseScreen();
        break;

    case 3:
        isRunning = false;
        break;

    default:
        std::cout << "Invalid option." << std::endl;
        break;
    }
}

// ----------------------------------------------------------------
// login()
// Placeholder for the login process. Later this will actually use
// AuthenticationManager to check credentials against real Student,
// Teacher, and Admin objects. For now it just shows the login
// menu and prints a placeholder message.
// ----------------------------------------------------------------
void UniSphereSystem::login()
{
    menu.showLoginMenu();
    int choice = inputHelper.getInteger(1, 4);

    switch (choice)
    {
    case 1:
        std::cout << "Student login not implemented yet." << std::endl;
        showStudentDashboard();
        break;

    case 2:
        std::cout << "Teacher login not implemented yet." << std::endl;
        showTeacherDashboard();
        break;

    case 3:
        std::cout << "Admin login not implemented yet." << std::endl;
        showAdminDashboard();
        break;

    case 4:
        // Back to main menu, nothing else to do.
        break;

    default:
        std::cout << "Invalid option." << std::endl;
        break;
    }
}

// ----------------------------------------------------------------
// logout()
// Placeholder for logging out. Later this will call
// AuthenticationManager::logout() once real sessions exist.
// ----------------------------------------------------------------
void UniSphereSystem::logout()
{
    std::cout << "Logging out..." << std::endl;
}

// ----------------------------------------------------------------
// showStudentDashboard()
// Placeholder for the student dashboard. Later this will loop on
// Menu::showStudentMenu() and call into StudentManager for real
// data. For now it just displays the menu once and logs out.
// ----------------------------------------------------------------
void UniSphereSystem::showStudentDashboard()
{
    menu.showStudentMenu();
    std::cout << "Student dashboard not implemented yet." << std::endl;
    consoleHelper.pauseScreen();
    logout();
}

// ----------------------------------------------------------------
// showTeacherDashboard()
// Placeholder for the teacher dashboard. Later this will loop on
// Menu::showTeacherMenu() and call into TeacherManager for real
// data. For now it just displays the menu once and logs out.
// ----------------------------------------------------------------
void UniSphereSystem::showTeacherDashboard()
{
    menu.showTeacherMenu();
    std::cout << "Teacher dashboard not implemented yet." << std::endl;
    consoleHelper.pauseScreen();
    logout();
}

// ----------------------------------------------------------------
// showAdminDashboard()
// Placeholder for the admin dashboard. Later this will loop on
// Menu::showAdminMenu() and call into the other managers for real
// data. For now it just displays the menu once and logs out.
// ----------------------------------------------------------------
void UniSphereSystem::showAdminDashboard()
{
    menu.showAdminMenu();
    std::cout << "Admin dashboard not implemented yet." << std::endl;
    consoleHelper.pauseScreen();
    logout();
}