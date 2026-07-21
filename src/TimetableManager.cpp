#include "TimetableManager.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// Vector starts empty, nothing else needs to be set up.
// ----------------------------------------------------------------
TimetableManager::TimetableManager()
{
}

// ----------------------------------------------------------------
// Destructor
// std::vector cleans itself up, so nothing to do here.
// ----------------------------------------------------------------
TimetableManager::~TimetableManager()
{
}

// ----------------------------------------------------------------
// addTimetable()
// Adds a new Timetable entry to the end of the collection.
// ----------------------------------------------------------------
void TimetableManager::addTimetable(const Timetable& timetable)
{
    timetables.push_back(timetable);
}

// ----------------------------------------------------------------
// removeTimetable()
// Looks through the collection for a matching timetable ID.
// If found, removes it and returns true, otherwise returns false.
// ----------------------------------------------------------------
bool TimetableManager::removeTimetable(const std::string& timetableId)
{
    for (std::size_t i = 0; i < timetables.size(); i++)
    {
        if (timetables[i].getTimetableId() == timetableId)
        {
            timetables.erase(timetables.begin() + i);
            return true;
        }
    }

    return false;
}

// ----------------------------------------------------------------
// searchTimetable()
// Looks through the collection for a matching timetable ID and
// returns a pointer to it, or nullptr if no match is found.
// ----------------------------------------------------------------
Timetable* TimetableManager::searchTimetable(const std::string& timetableId)
{
    for (std::size_t i = 0; i < timetables.size(); i++)
    {
        if (timetables[i].getTimetableId() == timetableId)
        {
            return &timetables[i];
        }
    }

    return nullptr;
}

// ----------------------------------------------------------------
// displayAllTimetables()
// Prints the details of every timetable entry in the collection.
// Reuses Timetable::displayTimetable() instead of printing fields
// again.
// ----------------------------------------------------------------
void TimetableManager::displayAllTimetables() const
{
    if (timetables.empty())
    {
        std::cout << "No timetable entries found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < timetables.size(); i++)
    {
        std::cout << "------------------------------------------" << std::endl;
        timetables[i].displayTimetable();
    }
}

// ----------------------------------------------------------------
// getTotalTimetables()
// Returns the current number of timetable entries being managed.
// ----------------------------------------------------------------
int TimetableManager::getTotalTimetables() const
{
    return static_cast<int>(timetables.size());
}