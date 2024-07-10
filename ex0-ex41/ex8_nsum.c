#include<stdio.h>
#define START 1
#define END 100
int main()
{
    float sum = 0;
    float j;
    int k,r,sign;
    for(k=START;k<=END;k++)
    {
        r = k % 2; // inside the loop!!
        if(r == 0)
        {
            sign = -1;
        }
        else 
        {
            sign = 1;
        }
        j = sign*(1.0/k);  //
        sum = sum + j;
        //printf("Sum=%.5f\n",sum);       //debug
    }
    printf("Sum=%.5f\n",sum);
    return 0;
} 
