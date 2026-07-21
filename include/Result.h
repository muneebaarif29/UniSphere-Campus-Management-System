#ifndef RESULT_H
#define RESULT_H

#include <string>

// ================================================================
// Class: Result
// ----------------------------------------------------------------
// Represents a single academic result record in the UniSphere
// system. This is a standalone class (does not inherit from
// Person) since a result is not a "person" - it is an entity that
// links a student to a course through marks and a grade.
//
// Future versions will connect Result to:
// - Student   (via studentRollNumber, matching Student::getRollNumber())
// - Teacher   (the teacher who uploads results, through
//              Teacher::uploadResult())
// - Course    (via courseCode, matching Course::getCourseCode())
// - Database  (results will eventually be stored/queried from a
//              proper database table instead of in-memory objects)
// - File Handling (result records will be saved/loaded from disk,
//              e.g. one line per record in a .txt/.csv file)
//
// For now, Result only stores its own data as plain strings/numbers
// and provides simple get/set/display behavior. The links above are
// intentionally left as plain string fields (studentRollNumber,
// courseCode) rather than object references, so this class stays
// independent and lightweight until the integration layer is built.
// ================================================================
class Result
{
private:
    std::string resultId;          // Unique identifier for this record
    std::string studentRollNumber; // Links to Student::getRollNumber()
    std::string courseCode;        // Links to Course::getCourseCode()
    double marks;                  // Marks obtained by the student
    std::string grade;             // Letter grade (e.g. "A", "B+")

public:
    // Default constructor
    Result();

    // Parameterized constructor
    Result(const std::string& resultId,
           const std::string& studentRollNumber,
           const std::string& courseCode,
           double marks,
           const std::string& grade);

    // Destructor
    ~Result();

    // Sets/updates all result data at once
    void setResultData(const std::string& resultId,
                        const std::string& studentRollNumber,
                        const std::string& courseCode,
                        double marks,
                        const std::string& grade);

    // Displays the result record's information
    void displayResult() const;

    // Getters
    std::string getResultId() const;
    std::string getStudentRollNumber() const;
    std::string getCourseCode() const;
    double getMarks() const;
    std::string getGrade() const;

    // Setters
    void setResultId(const std::string& resultId);
    void setStudentRollNumber(const std::string& studentRollNumber);
    void setCourseCode(const std::string& courseCode);
    void setMarks(double marks);
    void setGrade(const std::string& grade);
};

#endif // RESULT_H