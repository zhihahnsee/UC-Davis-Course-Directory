#ifndef _COURSES_UTIL_H_
#define _COURSES_UTIL_H_
#include <vector>
#include "CompEng.h"
#include "Courses.h"
#include "ECE.h"
#include "Math.h"
#include "Physics.h"

using namespace std;

// Utility helper functions for Courses class

void display(const vector<Courses> &courses);

// Utility helper functions for Computer Engineering class

void display(const vector<CompEng> &courses);

// Utility helper functions for ECE class

void display(const vector<ECE> &courses);

// Utility helper functions for Math class

void display(const vector<Math> &courses);

// Utility helper functions for Physics class

void display(const vector<Physics> &courses);


#endif