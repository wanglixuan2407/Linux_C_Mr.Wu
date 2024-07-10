/*lower one capital letter*/
#include<stdio.h>
int main()
{
    int lower(int c);
    int uc,lc;
    uc=getchar();
    lc = lower(uc);
    printf("lc=%c\n",lc);
    return 0;
}
int lower(int c)
{
    if((c>='A')&&(c<='Z'))
    {
        return c-'A'+'a';
    }
    else
    {
        return c;
    }
}