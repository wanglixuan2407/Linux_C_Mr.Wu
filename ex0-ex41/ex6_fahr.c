/*Fahrenheit temperature & Celsius temperature */
#include<stdio.h>
#define STEP 10
#define UPPER_LIMIT 300
#define LOWER_LIMIT 0
int main()
{
    float Fahr,Cel;                               //float .2f 147.10  int %d 147
    for(Fahr = LOWER_LIMIT;Fahr<=UPPER_LIMIT;Fahr = Fahr+STEP)
    {
        Cel = (Fahr-32)/1.8;
        printf("Fahr=%.2f\tCel=%.2f\n",Fahr,Cel);  //\t:table
    }
    return 0;
}

