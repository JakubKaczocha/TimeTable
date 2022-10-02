#ifndef TIMETABLE_H
#define TIMETABLE_H

#include <vector>

class TimeTable
{
public:
    TimeTable();


private:
    std::vector < std::vector < std::pair < int, std::vector< int > > > > table_; // day, subject, slots/nr group,
                                                                                  //time in minutes
    const int DAYS = 5, SUBJECT = 9;
};

#endif // TIMETABLE_H
