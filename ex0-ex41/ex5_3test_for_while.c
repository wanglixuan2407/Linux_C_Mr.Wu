/*step-by-step debug:The for & while loops below are equal*/
#include<stdio.h>
int main()
{
    int i;
    for(i = 0;i < 10 ; i++)
    {
        printf("%d",i);
    }
    int p;
    p = 0;
    do{
        p = p+1;
    }while(p<10);
    return 0;
}