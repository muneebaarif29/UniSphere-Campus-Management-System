#ifndef FILEMANAGER_H
#define FILEMANAGER_H

// ================================================================
// Class: FileManager
// ----------------------------------------------------------------
// Will eventually be responsible for saving and loading every
// data type in the UniSphere system to and from disk. For now,
// every function is just a placeholder that prints a message,
// real file handling will be added in a later version.
// ================================================================
class FileManager
{
public:
    // Constructor
    FileManager();

    // Destructor
    ~FileManager();

    // Student file operations
    void saveStudents();
    void loadStudents();

    // Teacher file operations
    void saveTeachers();
    void loadTeachers();

    // Course file operations
    void saveCourses();
    void loadCourses();

    // Department file operations
    void saveDepartments();
    void loadDepartments();

    // Attendance file operations
    void saveAttendance();
    void loadAttendance();

    // Result file operations
    void saveResults();
    void loadResults();

    // Fee file operations
    void saveFees();
    void loadFees();

    // Timetable file operations
    void saveTimetable();
    void loadTimetable();
};

#endif // FILEMANAGER_H