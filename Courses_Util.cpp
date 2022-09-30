#include <iostream>
#include "Courses_Util.h"


// Displays courses objects in a  vector of courses objects 
// void display(const std::vector<Courses> &courses) {
//     std::cout << "\n==================== Courses =========================" << std::endl;
//     for (const auto &cou: courses) 
//         std::cout << cou << std::endl;
// }

// void set_units(vector<Courses> &courses, int units_worth) {
//     std::cout << "\n ================ Setting Units ======================" << std::endl;
//     for (auto &courses:courses)
//         if (courses.set_units(units_worth))
//             std::cout << courses << " is worth " << units_worth << " units." << std::endl;
//         else
//             std::cout << "Failed to set " << units_worth << "to " << courses << std::endl;
// }

// -------------------------------------------------------------------------------------------------

// Displays courses objects in a  vector of courses objects 
void display(const std::vector<CompEng> &courses) {
    std::cout << "\n================= Computer Engineering Courses ==================" << std::endl;
    for (const auto &courses: courses) 
        std::cout << courses << std::endl;
}

void set_units(vector<CompEng> &courses, int units_worth) {
    std::cout << "\n =========== Setting Computer Engineering Course Units =============" << std::endl;
    for (auto &courses:courses)
        if (courses.set_units(units_worth))
            std::cout << courses << " is worth " << units_worth << " units." << std::endl;
        else
            std::cout << "Failed to set " << units_worth << "to " << courses << std::endl;
}

// ---------------------------------------------------------------------------------------------------

// Displays courses objects in a  vector of courses objects 
void display(const std::vector<ECE> &courses) {
    std::cout << "\n==================== ECE Courses =========================" << std::endl;
    for (const auto &courses: courses) 
        std::cout << courses << std::endl;
}

void set_units(vector<ECE> &courses, int units_worth) {
    std::cout << "\n ================ Setting ECE Course Units ======================" << std::endl;
    for (auto &courses:courses)
        if (courses.set_units(units_worth))
            std::cout << courses << " is worth " << units_worth << " units." << std::endl;
        else
            std::cout << "Failed to set " << units_worth << "to " << courses << std::endl;
}

// -----------------------------------------------------------------------------------------------------

// Displays courses objects in a  vector of courses objects 
void display(const std::vector<Math> &courses) {
    std::cout << "\n==================== Math Courses =========================" << std::endl;
    for (const auto &courses: courses) 
        std::cout << courses << std::endl;
}

void set_units(vector<Math> &courses, int units_worth) {
    std::cout << "\n ================ Setting Math Course Units ======================" << std::endl;
    for (auto &courses:courses)
        if (courses.set_units(units_worth))
            std::cout << courses << " is worth " << units_worth << " units." << std::endl;
        else
            std::cout << "Failed to set " << units_worth << "to " << courses << std::endl;
}

// -----------------------------------------------------------------------------------------------------

// Displays courses objects in a  vector of courses objects 
void display(const std::vector<Physics> &courses) {
    std::cout << "\n==================== Physics Courses =========================" << std::endl;
    for (const auto &courses: courses) 
        std::cout << courses << std::endl;
}

void set_units(vector<Physics> &courses, int units_worth) {
    std::cout << "\n ================ Setting Physics Course Units ======================" << std::endl;
    for (auto &courses:courses)
        if (courses.set_units(units_worth))
            std::cout << courses << " is worth " << units_worth << " units." << std::endl;
        else
            std::cout << "Failed to set " << units_worth << "to " << courses << std::endl;
}