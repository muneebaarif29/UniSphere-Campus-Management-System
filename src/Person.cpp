#include "Person.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Initializes all data members to empty strings.
// ----------------------------------------------------------------
Person::Person()
    : name(""), email(""), phone(""), password(""), personId("")
{
    // All members initialized via the initializer list above.
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Initializes a person with a given ID and personal data.
// ----------------------------------------------------------------
Person::Person(const std::string& personId,
               const std::string& name,
               const std::string& email,
               const std::string& phone,
               const std::string& password)
    : name(name), email(email), phone(phone),
      password(password), personId(personId)
{
    // All values are set through the initializer list above.
}

// ----------------------------------------------------------------
// Virtual Destructor
// No dynamic resources to release currently, but declared virtual
// so derived classes (Student, Teacher, Admin) destruct safely
// when deleted through a Person pointer.
// ----------------------------------------------------------------
Person::~Person()
{
}

// ----------------------------------------------------------------
// setData()
// Updates all core personal fields at once.
// ----------------------------------------------------------------
void Person::setData(const std::string& name,
                      const std::string& email,
                      const std::string& phone,
                      const std::string& password)
{
    this->name = name;
    this->email = email;
    this->phone = phone;
    this->password = password;
}

// ----------------------------------------------------------------
// displayData()
// Prints the person's basic information to the console.
// The password is intentionally excluded for security reasons.
// ----------------------------------------------------------------
void Person::displayData() const
{
    std::cout << "Person ID : " << personId << std::endl;
    std::cout << "Name      : " << name      << std::endl;
    std::cout << "Email     : " << email     << std::endl;
    std::cout << "Phone     : " << phone     << std::endl;
}

// ----------------------------------------------------------------
// login()
// Compares given credentials with the stored ones.
// Returns true or false only; no console output here so that
// calling code (or a future UI/database layer) decides how to
// respond to the result.
// ----------------------------------------------------------------
bool Person::login(const std::string& inputEmail,
                    const std::string& inputPassword)
{
    return (inputEmail == email) && (inputPassword == password);
}

// ----------------------------------------------------------------
// logout()
// Placeholder for ending a session. Deliberately silent for now;
// future versions may clear session tokens, timestamps, etc.
// ----------------------------------------------------------------
void Person::logout()
{
    // Intentionally empty for now.
}

// ----------------------------------------------------------------
// Setters
// Each setter updates a single field, allowing derived classes
// to update specific data without resetting everything else.
// ----------------------------------------------------------------
void Person::setName(const std::string& name)
{
    this->name = name;
}

void Person::setEmail(const std::string& email)
{
    this->email = email;
}

void Person::setPhone(const std::string& phone)
{
    this->phone = phone;
}

void Person::setPassword(const std::string& password)
{
    this->password = password;
}

// ----------------------------------------------------------------
// Getters
// Provide read-only access to private/protected data.
// ----------------------------------------------------------------
std::string Person::getName() const
{
    return name;
}

std::string Person::getEmail() const
{
    return email;
}

std::string Person::getPhone() const
{
    return phone;
}

std::string Person::getPersonId() const
{
    return personId;
}