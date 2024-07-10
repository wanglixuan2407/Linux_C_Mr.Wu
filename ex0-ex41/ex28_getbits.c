/*getbits*/
#include<stdio.h>
enum NUMS{MAXLEN=1000,START=5,NUM=2};
unsigned getbits(unsigned x,int p,int n);
int main()
{
    int b,a = 0x56674;
    b = getbits(a,START,NUM);
    printf("b=%x\n",b);
    return 0;
}
unsigned getbits(unsigned x,int p,int n)
{
    return ((x>>(p+1-n))&(~((~0)<<n)));
}