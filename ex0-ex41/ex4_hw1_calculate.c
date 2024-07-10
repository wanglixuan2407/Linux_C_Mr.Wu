/*function's Local variables*/
#include<stdio.h>
int main()
{
    int calculate(int x,int y);//declaration of function calculate
    int a,b,c;                 //declaration of main's Local variables a,b,c   
    a = 10;
    b = 8;
    c = calculate(a,b);       //After calculate (function) ends, x,y,z will be reclaimed (huishou), z is returned to c , c will be seen in main
    printf("c=%d\n",c); 
    a = 7;
    b = 12;
    c = calculate(a,b);       //After calculate (function) ends, x,y,z will be reclaimed (huishou), z is returned to c , c will be seen in main
    printf("c=%d\n",c);
    return 0;
}                              //main function ends

int calculate(int x, int y)    //declaraion of calculate's Local variables x,y
{
    int z ;                    //declaraion of calculate's Local variable z 
    if(x>y)
    {
        z = x - y;
    }
    else
    {
        z = x * y;
    }
    return z;
}