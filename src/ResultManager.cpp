#include "ResultManager.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// Vector starts empty, nothing else needs to be set up.
// ----------------------------------------------------------------
ResultManager::ResultManager()
{
}

// ----------------------------------------------------------------
// Destructor
// std::vector cleans itself up, so nothing to do here.
// ----------------------------------------------------------------
ResultManager::~ResultManager()
{
}

// ----------------------------------------------------------------
// addResult()
// Adds a new Result to the end of the collection.
// ----------------------------------------------------------------
void ResultManager::addResult(const Result& result)
{
    results.push_back(result);
}

// ----------------------------------------------------------------
// removeResult()
// Looks through the collection for a matching result ID.
// If found, removes it and returns true, otherwise returns false.
// ----------------------------------------------------------------
bool ResultManager::removeResult(const std::string& resultId)
{
    for (std::size_t i = 0; i < results.size(); i++)
    {
        if (results[i].getResultId() == resultId)
        {
            results.erase(results.begin() + i);
            return true;
        }
    }

    return false;
}

// ----------------------------------------------------------------
// searchResult()
// Looks through the collection for a matching result ID and
// returns a pointer to it, or nullptr if no match is found.
// ----------------------------------------------------------------
Result* ResultManager::searchResult(const std::string& resultId)
{
    for (std::size_t i = 0; i < results.size(); i++)
    {
        if (results[i].getResultId() == resultId)
        {
            return &results[i];
        }
    }

    return nullptr;
}

// ----------------------------------------------------------------
// displayAllResults()
// Prints the details of every result in the collection.
// Reuses Result::displayResult() instead of printing fields again.
// ----------------------------------------------------------------
void ResultManager::displayAllResults() const
{
    if (results.empty())
    {
        std::cout << "No results found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < results.size(); i++)
    {
        std::cout << "------------------------------------------" << std::endl;
        results[i].displayResult();
    }
}

// ----------------------------------------------------------------
// getTotalResults()
// Returns the current number of results being managed.
// ----------------------------------------------------------------
int ResultManager::getTotalResults() const
{
    return static_cast<int>(results.size());
}