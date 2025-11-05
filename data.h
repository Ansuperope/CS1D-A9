#ifndef DATA_H
#define DATA_H

#include <unordered_map>
#include <string>

enum City {
    AT,     // 0
    BO,     // 1
    CHI,    // 2
    DA,     // 3
    DEN,    // 4
    HO,     // 5
    KC,     // 6
    LA,     // 7
    MI,     // 8
    NY,     // 9
    SF,     // 10
    SE      // 11
};

std::unordered_map<int, std::string> cities {
    { AT, "Atlanta" },
    { BO, "Boston" },
    { CHI, "Chicago" },
    { DA, "Dallas" },
    { DEN, "Denver" },
    { HO, "Houston" },
    { KC, "Kansas City" },
    { LA, "Los Angeles" },
    { MI, "Miami" },
    { NY, "New York" },
    { SF, "San Francisco" },
    { SE, "Seattle" }
};

// PRINTS CITY NAME
void printCity (int index) {
    auto it = cities.find(index);

    if (it != cities.end()) {
        std::cout << it->second << " ";
    }
    
} // END printCity
#endif