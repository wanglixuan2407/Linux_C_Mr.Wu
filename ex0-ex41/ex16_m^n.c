/*m^n*/
#include<stdio.h>
int main()
{
    int power(int x,int y);
    int m,n;
    int z;
    scanf("%d,%d",&m,&n);
    z=power(m,n);
    printf("%d",z);
    return 0;
}

int power(int x,int y)
{
    int i = 1;
    int q = 1;
    for(i = 1;i <= y; i++)
    {
        q = q*x;
    }
    return q;
}