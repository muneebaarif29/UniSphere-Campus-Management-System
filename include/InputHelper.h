#ifndef INPUTHELPER_H
#define INPUTHELPER_H

// ================================================================
// Class: InputHelper
// ----------------------------------------------------------------
// Small helper class that handles reading and validating simple
// integer input from the console. Centralizing this here means
// every menu in the project validates input the same way instead
// of repeating the same cin checks everywhere.
// ================================================================
class InputHelper
{
public:
    // Constructor
    InputHelper();

    // Destructor
    ~InputHelper();

    // Keeps asking until the user enters an integer between
    // min and max (inclusive)
    int getInteger(int min, int max);

    // Clears cin's error flags and throws away the rest of the
    // current input line, used after bad input is entered
    void clearInput();
};

#endif // INPUTHELPER_H