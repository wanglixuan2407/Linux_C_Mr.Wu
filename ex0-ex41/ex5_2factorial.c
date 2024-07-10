/*do while loop*/
#include <stdio.h>
int main()
{
    int factorial(int x);
    int k,n;
    scanf("%d",&k);
    n = factorial(k);
    printf("THe rusult of %d! is %d.",k,n);
}

int factorial(int x)
{
    int i,p;
    i=1;
    p=1;
    do{
        p = p*i;
        i = i+1;   //odd factorial:i=i+2;even factorial:i=2;i=i+2
    }while(i<=x); 
    return p;
}