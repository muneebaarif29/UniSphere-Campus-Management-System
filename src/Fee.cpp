#include "Fee.h"
#include <iostream>

// ----------------------------------------------------------------
// Default Constructor
// Initializes all fields to safe default values.
// ----------------------------------------------------------------
Fee::Fee()
    : feeId(""), studentRollNumber(""), amount(0.0),
      dueDate(""), status("")
{
}

// ----------------------------------------------------------------
// Parameterized Constructor
// Initializes a fee record with the given data.
// ----------------------------------------------------------------
Fee::Fee(const std::string& feeId,
         const std::string& studentRollNumber,
         double amount,
         const std::string& dueDate,
         const std::string& status)
    : feeId(feeId), studentRollNumber(studentRollNumber),
      amount(amount), dueDate(dueDate), status(status)
{
}

// ----------------------------------------------------------------
// Destructor
// No dynamic resources to release currently.
// ----------------------------------------------------------------
Fee::~Fee()
{
}

// ----------------------------------------------------------------
// setFeeData()
// Updates all fee fields at once. Later, this will be the
// function called after reading a record from a file or database
// row, or after an admin updates a student's fee status.
// ----------------------------------------------------------------
void Fee::setFeeData(const std::string& feeId,
                      const std::string& studentRollNumber,
                      double amount,
                      const std::string& dueDate,
                      const std::string& status)
{
    this->feeId = feeId;
    this->studentRollNumber = studentRollNumber;
    this->amount = amount;
    this->dueDate = dueDate;
    this->status = status;
}

// ----------------------------------------------------------------
// displayFee()
// Prints the fee record's information to the console.
// Future versions may reuse this inside Student::viewFeeStatus()
// once real Fee objects are connected to a student.
// ----------------------------------------------------------------
void Fee::displayFee() const
{
    std::cout << "Fee ID       : " << feeId              << std::endl;
    std::cout << "Roll Number  : " << studentRollNumber  << std::endl;
    std::cout << "Amount       : " << amount              << std::endl;
    std::cout << "Due Date     : " << dueDate             << std::endl;
    std::cout << "Status       : " << status              << std::endl;
}

// ----------------------------------------------------------------
// Getters
// ----------------------------------------------------------------
std::string Fee::getFeeId() const
{
    return feeId;
}

std::string Fee::getStudentRollNumber() const
{
    return studentRollNumber;
}

double Fee::getAmount() const
{
    return amount;
}

std::string Fee::getDueDate() const
{
    return dueDate;
}

std::string Fee::getStatus() const
{
    return status;
}

// ----------------------------------------------------------------
// Setters
// ----------------------------------------------------------------
void Fee::setFeeId(const std::string& feeId)
{
    this->feeId = feeId;
}

void Fee::setStudentRollNumber(const std::string& studentRollNumber)
{
    this->studentRollNumber = studentRollNumber;
}

void Fee::setAmount(double amount)
{
    this->amount = amount;
}

void Fee::setDueDate(const std::string& dueDate)
{
    this->dueDate = dueDate;
}

void Fee::setStatus(const std::string& status)
{
    this->status = status;
}