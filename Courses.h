#ifndef _COURSES_H_
#define _COURSES_H_
#include <string>

using namespace std;

class Courses {
    friend ostream &operator<<(ostream &os, const Courses &courses);

    private:
        static constexpr const char *def_course_type = "Default Course Type";
        static constexpr int def_units_worth = 0;
        static constexpr const char *def_course_desc = "Default Course Description";
        static constexpr bool def_completed = 0;

    protected:
        string course_type;
        int units_worth;
        string course_desc;
        bool completed;

    public:
        Courses(string course_type = def_course_type, int units_worth = def_units_worth, string course_desc = def_course_desc, bool completed = def_completed);
        string get_description() const;
        int get_units() const;
        bool get_completed() const;
        int set_units(int units_worth);
};
#endif