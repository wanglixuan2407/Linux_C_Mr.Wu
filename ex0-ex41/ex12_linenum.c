/*linenum*//*2Ctrl+d:end*/
#include<stdio.h>
int main()
{
    int c;
    int n = 1;/*inintial:There is 1 line*/
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
        {
            n = n + 1;
        }
        else
        {
            ;
        }
    }
    printf("The number of lines is %d\n",n);
    return 0;
}