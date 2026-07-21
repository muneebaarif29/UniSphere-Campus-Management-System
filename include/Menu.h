#ifndef MENU_H
#define MENU_H

// ================================================================
// Class: Menu
// ----------------------------------------------------------------
// Responsible only for displaying the different console menus of
// the UniSphere system. This class does not read input or run any
// logic, it just prints formatted menu screens.
// ================================================================
class Menu
{
public:
    // Constructor
    Menu();

    // Destructor
    ~Menu();

    // Displays the welcome screen shown when the program starts
    void displayWelcome();

    // Displays the main menu options
    void showMainMenu();

    // Displays the login menu options
    void showLoginMenu();

    // Displays the student dashboard menu options
    void showStudentMenu();

    // Displays the teacher dashboard menu options
    void showTeacherMenu();

    // Displays the admin dashboard menu options
    void showAdminMenu();
};

#endif // MENU_H