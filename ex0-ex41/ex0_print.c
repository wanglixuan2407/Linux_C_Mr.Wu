#include<stdio.h>
int main()
{
    void print_Binary(unsigned int x);
    printf("%x\n",-63);
    printf("%u,%u,%u,%u,%u,%u,%u\n",0,1,-1,-3,2147483647,-2147483647,-56);//+-2147483648 warning  theory:-2^32+2^32-1
    printf("%d\n",-63);
    printf("178 Binary:");
    print_Binary(178);
    printf("-178 Binary:");
    print_Binary(-178);// 2's complement code buma   1's complement code:fanma
    return 0;
}

void print_Binary(unsigned int x)
{
    if(x>1)
    {
        print_Binary(x>>1);   //recursive:digui
    }
    putchar((x&1)?'1':'0');
}