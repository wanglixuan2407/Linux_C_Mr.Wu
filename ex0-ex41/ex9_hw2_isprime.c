/*isprime*/
#include<stdio.h>
#define START 2
#define END 1000
int main()
{
    int isprime(int x);
    int n,z;
    int num = 0;
    for(n = START;n <= END;n++)
    {
        z = isprime(n);
        if(z == 1)
        {
            num = num+1;
            printf("%d is a prime.\n",n);
        }
        else
        {
            ;
        }
    }
    printf("There are %d primes from 1 to 1000.\n",num);
    return 0;
}

int isprime(int x)
{
    int i;
    for(i = 2;i<=x/i;i++)
    {
        if(x%i == 0)
        {
            return 0;
        }
        else
        {
            ;
        }
    }
    return 1;
}