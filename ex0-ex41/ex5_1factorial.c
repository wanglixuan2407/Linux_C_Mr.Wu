/*Fctorial (jiecheng)*/
/*for if logic diagram!!*/
#include<stdio.h>

int main()
{
    int factorial (int x);                      //declaration of function factorial; return:int & variable:int
    int k,f;                                    //declaration of main's Local variables:k,f
    printf("Please enter a number:");               
    scanf("%d",&k);                             //input k
    f = factorial(k);                           //use the factorial function
    printf("The result of %d! is %d.\n",k,f);  
    return 0;
}

int factorial(int x)                            //definition of the function factorial
{
    int i,p;                                    //declaration of factorial's Local variables i,p
    for(i=1,p=1;i<=x;i++)                       //for loop
    {
        p = p*i;                                //n!
    }
    return p;                                   //return int p , main's int f
}