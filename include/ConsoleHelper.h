#ifndef CONSOLEHELPER_H
#define CONSOLEHELPER_H

#include <string>

// ================================================================
// Class: ConsoleHelper
// ----------------------------------------------------------------
// Small helper class with simple console output functions used
// all over the UniSphere system (pausing, clearing, and printing
// headings/lines). Keeping these in one place means every screen
// in the program looks consistent.
// ================================================================
class ConsoleHelper
{
public:
    // Constructor
    ConsoleHelper();

    // Destructor
    ~ConsoleHelper();

    // Waits for the user to press Enter before continuing
    void pauseScreen();

    // Clears the console screen (simple version for now)
    void clearScreen();

    // Prints a heading surrounded by a simple border
    void printHeading(const std::string& heading);

    // Prints a simple line separator
    void printLine();
};

#endif // CONSOLEHELPER_H