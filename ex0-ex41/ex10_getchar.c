/*getchar()*/
#include<stdio.h>
int main()
{
    int c;
    c = getchar();   /*read 1 symbol from the keyboard and assign it to c(int variable)*/
    while(c!=EOF)    /*eof:end of file*/
    {
        putchar(c);  
        c = getchar();
    }
    return 0;
}