#ifndef _COMPENG_H_
#define _COMPENG_H_
#include "Courses.h"

using namespace std;

class CompEng: public Courses {
    friend ostream &operator<<(ostream &os, const CompEng &compeng);

    private:
        static constexpr const char *def_course_name = "Default Course Name";
        static constexpr const int def_units_worth = 4;
        static constexpr const char *def_course_desc = "Default Computer Engineering Description";
        static constexpr const bool def_completed = 0;
    
    protected:
        string course_name;
        int units_worth;
        string course_desc;
        bool completed;
        
    public:
        CompEng(string course_name = def_course_name, int units_worth = def_units_worth, string course_desc = def_course_desc, bool completed = def_completed);
        bool change_to_completed(bool completed);
        bool get_completed() const;
};
#endif