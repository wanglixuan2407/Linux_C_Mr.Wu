/*num of 1*/
#include<stdio.h>
int main()
{
    unsigned bitcount(unsigned x);
    unsigned a = 0x56674;
    unsigned b;
    b = bitcount(a);
    printf("The number of 1 in %d is %d\n",a,b);//%x:16jinzhi
    return 0;
}

unsigned bitcount(unsigned x)
{
    unsigned z;
    for(z = 0;x!=0;x>>=1)
    {
        if(x&01)
        {
            z++;
        }
        else
        {
            ;
        }
    }
    return z;
}