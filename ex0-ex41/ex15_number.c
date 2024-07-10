/*number*/
#include<stdio.h>
int main()
{
    int c;
    int i = 0;
    int ndigit[10];
    int nwhite = 0;
    int nline = 0;
    int nother = 0;
    /* int nwhite,nother,nline*/
    /* nwhite = nother = nline = 0;*/
    /*int n1,n2,n3 = 0: n1,n2 did not have a certain value*/
    /*Do not mix C with Vivado up! In C, only "=" assigns, "," just applies to omit many "int" in declaration */
    for (i = 0;i < 10; i++)
    {
        ndigit[i] = 0;
    }
    i = 0;
    while((c=getchar())!='$')
    {
        if(c == ' ')
        {
            ++nwhite;
        }
        else if((c <= '9')&&(c >= '0'))
        {
            ++ndigit[c-'0'];
        }
        else if(c == '\n')
        {
            ++nline;
        }
        else
        {
            ++nother;
        }
    }
    printf("nwhite=%d\nnline=%d\nnother=%d\n",nwhite,nline,nother);
    for(i = 0;i<10;i++)
    {
        if(i == 0)
        {
            printf("ndigit=%d ",ndigit[i]);
        }
        else
        {
            printf("%d ",ndigit[i]);
        }
 
    }
    return 0;
}