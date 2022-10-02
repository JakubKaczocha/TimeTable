#include "timetable.h"
#include <cstdlib>

enum
{
    Monday = 0,
    Tuesday = 1,
    Wednesday = 2,
    Thursday = 3,
    Friday = 4,


    LO = 0,
    LJ = 1,
    LP = 2,
    LC = 3,
    LM = 4,
    LS = 5,
    LG = 6,
    LF = 7,
    LECTORATE = 8,


};

TimeTable::TimeTable()
{

   table_.resize( DAYS );
   for( int i = 0; i <= DAYS; i++)
   {
       table_.at( i ).resize( SUBJECT );
       for( int j = 0; j < SUBJECT; j++ )
       {
           if( j == LO )
           {
               table_.at( i ).at( j ).second.resize( 5 );
               table_.at( i ).at( j ).first = 15;
           }
           else if( j == LJ )
           {
               table_.at( i ).at( j ).second.resize( 5 );
               table_.at( i ).at( j ).first = 15;
           }
           else if( j == LP )
           {
               table_.at( i ).at( j ).second.resize( 5 );
               table_.at( i ).at( j ).first = 15;
           }
           else if( j == LC )
           {
               table_.at( i ).at( j ).second.resize( 3 );
               table_.at( i ).at( j ).first = 15;
           }
           else if( j == LM )
           {
               table_.at( i ).at( j ).second.resize( 5 );
               table_.at( i ).at( j ).first = 15;
           }
           else if( j == LM )
           {
               table_.at( i ).at( j ).second.resize( 5 );
               table_.at( i ).at( j ).first = 15;
           }
           else if( j == LG )
           {
               table_.at( i ).at( j ).second.resize( 2 );
               table_.at( i ).at( j ).first = 15;
           }
           else if( j == LF )
           {
               table_.at( i ).at( j ).second.resize( 7 );
               table_.at( i ).at( j ).first = 10;
           }
           else if( j == LECTORATE )
           {
               table_.at( i ).at( j ).second.resize( 6 );
               table_.at( i ).at( j ).first = 15;
           }
           else
           {
               exit(0);
           }
       }
   }
}




