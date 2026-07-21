#ifndef AUTHENTICATIONMANAGER_H
#define AUTHENTICATIONMANAGER_H

#include "Person.h"
#include <string>

// ================================================================
// Class: AuthenticationManager
// ----------------------------------------------------------------
// Handles login and logout for whichever Person (Student, Teacher,
// or Admin) is currently using the system. Does not inherit from
// any class - it just keeps track of the current session.
// ================================================================
class AuthenticationManager
{
private:
    Person* currentUser;  // Pointer to the person who is logged in
    bool loggedIn;         // Tracks whether someone is logged in right now

public:
    // Constructor
    AuthenticationManager();

    // Destructor
    ~AuthenticationManager();

    // Tries to log in the given person using their email and password
    bool login(Person* person,
               const std::string& email,
               const std::string& password);

    // Logs the current user out
    void logout();

    // Returns true if someone is currently logged in
    bool isLoggedIn() const;

    // Returns a pointer to the currently logged in person
    Person* getCurrentUser() const;
};

#endif // AUTHENTICATIONMANAGER_H