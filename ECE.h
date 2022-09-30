#ifndef _ECE_H_
#define _ECE_H_
#include "Courses.h"

using namespace std;

class ECE: public Courses{
    friend ostream &operator<<(ostream &os, const ECE &ECE);

    private:
        static constexpr const char *def_course_name = "Default Course Name";
        static constexpr const int def_units_worth = 0;
        static constexpr const char *def_course_desc = "Default ECE Description";
        static constexpr const bool def_completed = 0;
    
    protected:
        string course_name;
        int units_worth;
        string course_desc;
        bool completed;
        
    public:
        ECE(string course_name = def_course_name, int units_worth = def_units_worth, string course_desc = def_course_desc, bool completed = def_completed);
        bool change_to_completed(bool completed);
        void change_units(int units_worth);
};
#endif