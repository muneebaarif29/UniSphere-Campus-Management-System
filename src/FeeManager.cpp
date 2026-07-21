#include "FeeManager.h"
#include <iostream>

// ----------------------------------------------------------------
// Constructor
// Vector starts empty, nothing else needs to be set up.
// ----------------------------------------------------------------
FeeManager::FeeManager()
{
}

// ----------------------------------------------------------------
// Destructor
// std::vector cleans itself up, so nothing to do here.
// ----------------------------------------------------------------
FeeManager::~FeeManager()
{
}

// ----------------------------------------------------------------
// addFee()
// Adds a new Fee record to the end of the collection.
// ----------------------------------------------------------------
void FeeManager::addFee(const Fee& fee)
{
    fees.push_back(fee);
}

// ----------------------------------------------------------------
// removeFee()
// Looks through the collection for a matching fee ID.
// If found, removes it and returns true, otherwise returns false.
// ----------------------------------------------------------------
bool FeeManager::removeFee(const std::string& feeId)
{
    for (std::size_t i = 0; i < fees.size(); i++)
    {
        if (fees[i].getFeeId() == feeId)
        {
            fees.erase(fees.begin() + i);
            return true;
        }
    }

    return false;
}

// ----------------------------------------------------------------
// searchFee()
// Looks through the collection for a matching fee ID and returns
// a pointer to it, or nullptr if no match is found.
// ----------------------------------------------------------------
Fee* FeeManager::searchFee(const std::string& feeId)
{
    for (std::size_t i = 0; i < fees.size(); i++)
    {
        if (fees[i].getFeeId() == feeId)
        {
            return &fees[i];
        }
    }

    return nullptr;
}

// ----------------------------------------------------------------
// displayAllFees()
// Prints the details of every fee record in the collection.
// Reuses Fee::displayFee() instead of printing fields again.
// ----------------------------------------------------------------
void FeeManager::displayAllFees() const
{
    if (fees.empty())
    {
        std::cout << "No fee records found." << std::endl;
        return;
    }

    for (std::size_t i = 0; i < fees.size(); i++)
    {
        std::cout << "------------------------------------------" << std::endl;
        fees[i].displayFee();
    }
}

// ----------------------------------------------------------------
// getTotalFees()
// Returns the current number of fee records being managed.
// ----------------------------------------------------------------
int FeeManager::getTotalFees() const
{
    return static_cast<int>(fees.size());
}