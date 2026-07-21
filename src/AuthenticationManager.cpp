#include "AuthenticationManager.h"

// ----------------------------------------------------------------
// Constructor
// No one is logged in when the manager is first created.
// ----------------------------------------------------------------
AuthenticationManager::AuthenticationManager()
    : currentUser(nullptr), loggedIn(false)
{
}

// ----------------------------------------------------------------
// Destructor
// Does not delete currentUser since AuthenticationManager does
// not own that object, it just points to it.
// ----------------------------------------------------------------
AuthenticationManager::~AuthenticationManager()
{
}

// ----------------------------------------------------------------
// login()
// Just forwards the email and password to Person::login().
// If it succeeds, we remember the person as the current user.
// ----------------------------------------------------------------
bool AuthenticationManager::login(Person* person,
                                   const std::string& email,
                                   const std::string& password)
{
    if (person == nullptr)
    {
        return false;
    }

    bool success = person->login(email, password);

    if (success)
    {
        currentUser = person;
        loggedIn = true;
    }

    return success;
}

// ----------------------------------------------------------------
// logout()
// Clears the current session so no one is logged in anymore.
// ----------------------------------------------------------------
void AuthenticationManager::logout()
{
    currentUser = nullptr;
    loggedIn = false;
}

// ----------------------------------------------------------------
// isLoggedIn()
// Simple check for whether a session is currently active.
// ----------------------------------------------------------------
bool AuthenticationManager::isLoggedIn() const
{
    return loggedIn;
}

// ----------------------------------------------------------------
// getCurrentUser()
// Gives access to whoever is currently logged in.
// ----------------------------------------------------------------
Person* AuthenticationManager::getCurrentUser() const
{
    return currentUser;
}