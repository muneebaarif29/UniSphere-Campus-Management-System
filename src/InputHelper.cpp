#include "InputHelper.h"
#include <iostream>
#include <limits>

// ----------------------------------------------------------------
// Constructor
// Nothing to set up, this class has no data members.
// ----------------------------------------------------------------
InputHelper::InputHelper()
{
}

// ----------------------------------------------------------------
// Destructor
// Nothing to clean up here.
// ----------------------------------------------------------------
InputHelper::~InputHelper()
{
}

// ----------------------------------------------------------------
// getInteger()
// Reads an integer from the user and keeps asking until the value
// is a real number within the given min/max range.
// ----------------------------------------------------------------
int InputHelper::getInteger(int min, int max)
{
    int value = 0;

    while (true)
    {
        std::cin >> value;

        if (std::cin.fail())
        {
            std::cout << "Invalid input. Please enter a number: ";
            clearInput();
            continue;
        }

        clearInput();

        if (value < min || value > max)
        {
            std::cout << "Please enter a number between "
                      << min << " and " << max << ": ";
            continue;
        }

        return value;
    }
}

// ----------------------------------------------------------------
// clearInput()
// Clears any error flags on cin and ignores the rest of the
// current line so the next read starts fresh.
// ----------------------------------------------------------------
void InputHelper::clearInput()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}