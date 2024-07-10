/*Local/Global variables,function*/
#include<stdio.h>
    int d,e,f;   //Global variables
    //int max(int x,int y);  //function declaration : before the function is used
int main()
{
    int a,b,c;   //Local variables
    int max(int x,int y);    //function declaration : before the function is used
    scanf("%d,%d,%d,%d",&a,&b,&d,&e);
    c = max(a,b);
    f = max(d,e);
    printf("max=%d,%d\n",c,f);
    return 0;
}

int max(int x,int y)         //function definition
{
    int z;
    if(x>y)
    {
        z = x;//assign the value of x to register z
    }
    else
    {
        z = y;
    }
    return z;
}