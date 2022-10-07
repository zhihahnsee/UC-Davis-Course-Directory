#include "Physics.h"
#include <iostream>

Physics::Physics(string course_name, int units_worth, string course_desc, bool completed)
    :course_name{course_name}, units_worth {units_worth}, course_desc {course_desc}, completed {def_completed} {

}

bool Physics::change_to_completed(bool completed) {
    if (completed == 1)
        return 0;
    else
        return completed;

}

// void change_units(int units) {
//     int units_worth {units};
// }

std::ostream &operator<<(std::ostream &os, const Physics &course) {
	os << "[Physics Course: " << course.course_name << ", " << course.course_desc << ", " << course.units_worth << " units, " << course.completed << ".]";
	return os;
}