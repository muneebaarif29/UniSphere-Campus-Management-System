#ifndef FEEMANAGER_H
#define FEEMANAGER_H

#include "Fee.h"
#include <vector>
#include <string>

// ================================================================
// Class: FeeManager
// ----------------------------------------------------------------
// Manages a collection of Fee objects in memory for the UniSphere
// system. Does not inherit from any class - its only job is to
// add, remove, search, and display fee records. Everything is
// stored in memory for now, file handling will be added later.
// ================================================================
class FeeManager
{
private:
    std::vector<Fee> fees;  // In-memory collection of fee records

public:
    // Constructor
    FeeManager();

    // Destructor
    ~FeeManager();

    // Adds a new fee record to the collection
    void addFee(const Fee& fee);

    // Removes a fee record by fee ID, returns true if removed
    bool removeFee(const std::string& feeId);

    // Searches for a fee record by fee ID, returns nullptr if not found
    Fee* searchFee(const std::string& feeId);

    // Displays every fee record currently in the collection
    void displayAllFees() const;

    // Returns how many fee records are currently being managed
    int getTotalFees() const;
};

#endif // FEEMANAGER_H