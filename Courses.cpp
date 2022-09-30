#include "Courses.h"
#include <iostream>
using namespace std;

Courses::Courses(string course_type, int units_worth, string course_desc, bool completed)
    :course_type{course_type}, units_worth {units_worth}, course_desc {course_desc}, completed {def_completed} {
}

bool Courses::get_completed() const {
    return completed;
}

int Courses::get_units() const {
    return units_worth;
}

string Courses::get_description() const {
    return course_desc;
}

int Courses::set_units(int units_worth) {
    int set_units;
    cout << "How many units is this course worth? ";
    cin >> set_units;

    if (units_worth == 0) {
        return false;
    }
    else {
        units_worth = set_units;
        return true;
    }
}