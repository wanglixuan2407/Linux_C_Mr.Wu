/*COmmon Year OR LeapYear*/
#include<stdio.h>
#define START 2000
#define END 2200
int main()
{
    int isLeapYear(int x);
    int year,result;
    for (year = START;year<=END;year++)
    {
        result = isLeapYear(year);
        if(result==1)
        {
            printf("Year %d is Leapyear.\n",year);
        }
        else
        {
            printf("Year %d is Commonyear.\n",year);
        }
    }
    return 0;
} 

int isLeapYear(int x)
{
    int r,p,z,q;
    r = x%4;
    p = x%400;
    z = x%100;
    if(z!=0)
    {
        if(r == 0)
        {
            return 1;//q = 1;
        }
        else
        {
            return 0;//q = 0;
        }
    }
    else
    {
        if(p == 0)
        {
            return 1;//q = 1;
        }
        else
        {
            return 0;//q = 0;
        }
    }
    //return q;
}