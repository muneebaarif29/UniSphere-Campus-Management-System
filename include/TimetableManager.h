#ifndef TIMETABLEMANAGER_H
#define TIMETABLEMANAGER_H

#include "Timetable.h"
#include <vector>
#include <string>

// ================================================================
// Class: TimetableManager
// ----------------------------------------------------------------
// Manages a collection of Timetable objects in memory for the
// UniSphere system. Does not inherit from any class - its only
// job is to add, remove, search, and display timetable entries.
// Everything is stored in memory for now, file handling will be
// added later.
// ================================================================
class TimetableManager
{
private:
    std::vector<Timetable> timetables;  // In-memory collection of timetable entries

public:
    // Constructor
    TimetableManager();

    // Destructor
    ~TimetableManager();

    // Adds a new timetable entry to the collection
    void addTimetable(const Timetable& timetable);

    // Removes a timetable entry by timetable ID, returns true if removed
    bool removeTimetable(const std::string& timetableId);

    // Searches for a timetable entry by timetable ID, returns nullptr if not found
    Timetable* searchTimetable(const std::string& timetableId);

    // Displays every timetable entry currently in the collection
    void displayAllTimetables() const;

    // Returns how many timetable entries are currently being managed
    int getTotalTimetables() const;
};

#endif // TIMETABLEMANAGER_H