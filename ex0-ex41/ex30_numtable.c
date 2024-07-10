#include<stdio.h>
#define NUM 123
#define SCALE 10
int main()
{
    int i ;
    for (i = 1;i <= NUM;i++)
    {
        printf("%6d%c",i,(((i%SCALE)==0)||(i==NUM))?'\n':' ');//2 input
    }
    return 0;
}