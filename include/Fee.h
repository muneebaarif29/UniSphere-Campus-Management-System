#ifndef FEE_H
#define FEE_H

#include <string>

// ================================================================
// Class: Fee
// ----------------------------------------------------------------
// Represents a single fee record in the UniSphere system.
// This is a standalone class (does not inherit from Person) since
// a fee record is not a "person" - it is an entity that tracks a
// student's payment obligation.
//
// Future versions will connect Fee to:
// - Student   (via studentRollNumber, matching Student::getRollNumber())
// - Admin     (admins will manage/verify fee records, related to
//              future Admin reporting features)
// - Database  (fee records will eventually be stored/queried from
//              a proper database table instead of in-memory objects)
// - File Handling (fee records will be saved/loaded from disk,
//              e.g. one line per record in a .txt/.csv file)
//
// For now, Fee only stores its own data as plain strings/numbers
// and provides simple get/set/display behavior. The link above is
// intentionally left as a plain string field (studentRollNumber)
// rather than an object reference, so this class stays independent
// and lightweight until the integration layer is built.
//
// status is a plain string such as: "Paid", "Pending", "Overdue".
// ================================================================
class Fee
{
private:
    std::string feeId;             // Unique identifier for this record
    std::string studentRollNumber; // Links to Student::getRollNumber()
    double amount;                 // Fee amount due
    std::string dueDate;           // Date by which the fee must be paid
    std::string status;            // "Paid", "Pending", or "Overdue"

public:
    // Default constructor
    Fee();

    // Parameterized constructor
    Fee(const std::string& feeId,
        const std::string& studentRollNumber,
        double amount,
        const std::string& dueDate,
        const std::string& status);

    // Destructor
    ~Fee();

    // Sets/updates all fee data at once
    void setFeeData(const std::string& feeId,
                     const std::string& studentRollNumber,
                     double amount,
                     const std::string& dueDate,
                     const std::string& status);

    // Displays the fee record's information
    void displayFee() const;

    // Getters
    std::string getFeeId() const;
    std::string getStudentRollNumber() const;
    double getAmount() const;
    std::string getDueDate() const;
    std::string getStatus() const;

    // Setters
    void setFeeId(const std::string& feeId);
    void setStudentRollNumber(const std::string& studentRollNumber);
    void setAmount(double amount);
    void setDueDate(const std::string& dueDate);
    void setStatus(const std::string& status);
};

#endif // FEE_H