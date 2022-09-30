#include "CompEng.h"
#include <iostream>

CompEng::CompEng(string course_name, int units_worth, string course_desc, bool completed)
    :course_name{course_name}, units_worth {units_worth}, course_desc {course_desc}, completed {def_completed} {

}

bool CompEng::change_to_completed(bool completed) {
    if (completed == 1) {
        return 0;
    }
    else {
        return completed;
    }  

}

std::ostream &operator<<(std::ostream &os, const CompEng &course) {
	os << "[Computer Engineering Course: " << course.course_name << ": " << course.units_worth << " units, " << course.completed << ".]";
	return os;
}