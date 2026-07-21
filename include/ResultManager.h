#ifndef RESULTMANAGER_H
#define RESULTMANAGER_H

#include "Result.h"
#include <vector>
#include <string>

// ================================================================
// Class: ResultManager
// ----------------------------------------------------------------
// Manages a collection of Result objects in memory for the
// UniSphere system. Does not inherit from any class - its only
// job is to add, remove, search, and display result records.
// Everything is stored in memory for now, file handling will be
// added later.
// ================================================================
class ResultManager
{
private:
    std::vector<Result> results;  // In-memory collection of results

public:
    // Constructor
    ResultManager();

    // Destructor
    ~ResultManager();

    // Adds a new result to the collection
    void addResult(const Result& result);

    // Removes a result by result ID, returns true if removed
    bool removeResult(const std::string& resultId);

    // Searches for a result by result ID, returns nullptr if not found
    Result* searchResult(const std::string& resultId);

    // Displays every result currently in the collection
    void displayAllResults() const;

    // Returns how many results are currently being managed
    int getTotalResults() const;
};

#endif // RESULTMANAGER_H