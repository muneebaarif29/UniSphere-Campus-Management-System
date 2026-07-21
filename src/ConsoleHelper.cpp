#include "ConsoleHelper.h"
#include <iostream>
#include <limits>

// ----------------------------------------------------------------
// Constructor
// Nothing to set up, this class has no data members.
// ----------------------------------------------------------------
ConsoleHelper::ConsoleHelper()
{
}

// ----------------------------------------------------------------
// Destructor
// Nothing to clean up here.
// ----------------------------------------------------------------
ConsoleHelper::~ConsoleHelper()
{
}

// ----------------------------------------------------------------
// pauseScreen()
// Simple "Press Enter to continue..." pause so the user can read
// the output before the next menu shows up.
// ----------------------------------------------------------------
void ConsoleHelper::pauseScreen()
{
    std::cout << std::endl << "Press Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

// ----------------------------------------------------------------
// clearScreen()
// Just prints a bunch of blank lines for now instead of using an
// OS specific clear command, this keeps the code portable.
// ----------------------------------------------------------------
void ConsoleHelper::clearScreen()
{
    for (int i = 0; i < 40; i++)
    {
        std::cout << std::endl;
    }
}

// ----------------------------------------------------------------
// printHeading()
// Prints a simple heading with a border above and below it.
// ----------------------------------------------------------------
void ConsoleHelper::printHeading(const std::string& heading)
{
    printLine();
    std::cout << heading << std::endl;
    printLine();
}

// ----------------------------------------------------------------
// printLine()
// Prints a simple dashed line, used to separate sections of text.
// ----------------------------------------------------------------
void ConsoleHelper::printLine()
{
    std::cout << "==========================================" << std::endl;
}