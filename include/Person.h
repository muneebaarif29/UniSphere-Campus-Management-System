#ifndef PERSON_H
#define PERSON_H

#include <string>

// ================================================================
// Class: Person
// ----------------------------------------------------------------
// Base class for all human entities in the UniSphere system.
// Student, Teacher, and Admin will inherit from this class.
// Holds common identity/account data and basic account behavior.
// Designed to remain stable while derived classes and later
// versions (file handling, database, GUI, AI) build on top of it.
// ================================================================
class Person
{
private:
    std::string name;      // Full name of the person
    std::string email;     // Email address (used for contact/login)
    std::string phone;     // Contact phone number
    std::string password;  // Account password (used for login)

protected:
    std::string personId;  // Unique identifier, accessible to derived classes
                            // (e.g. Student/Teacher/Admin can build their own
                            // ID formats on top of this in the future)

public:
    // Default constructor
    Person();

    // Parameterized constructor
    Person(const std::string& personId,
           const std::string& name,
           const std::string& email,
           const std::string& phone,
           const std::string& password);

    // Virtual destructor (ensures proper cleanup in derived classes)
    virtual ~Person();

    // Sets/updates all personal data at once
    virtual void setData(const std::string& name,
                          const std::string& email,
                          const std::string& phone,
                          const std::string& password);

    // Displays the person's data (password is never shown)
    virtual void displayData() const;

    // Verifies given credentials against stored ones
    virtual bool login(const std::string& inputEmail,
                        const std::string& inputPassword);

    // Ends the current session (silent operation, no output)
    virtual void logout();

    // Individual setters
    void setName(const std::string& name);
    void setEmail(const std::string& email);
    void setPhone(const std::string& phone);
    void setPassword(const std::string& password);

    // Individual getters
    std::string getName() const;
    std::string getEmail() const;
    std::string getPhone() const;
    std::string getPersonId() const;
};

#endif // PERSON_H