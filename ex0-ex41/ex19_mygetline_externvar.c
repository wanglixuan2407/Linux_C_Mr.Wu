#include<stdio.h>
#define MAXLEN 1000
int mygetline(void);
void copy (void);
int max;
char line[MAXLEN],longest[MAXLEN];

int main()
{
    int len;
    extern int max;
    extern char longest[];
    max = 0;
    while((len = mygetline())>0)
    {
        if(len>max)
        {
            max = len;
            copy();
        }
        else
        {
            ;
        }
        printf("\nThe longest line is: %s.\nlength=%d.",longest,max);
    }
    return 0;
}

int mygetline(void)
{
    int c,i;
    extern char line[];
    for(i=0;(i<MAXLEN-1)&&((c=getchar())!='$')&&(c!='\n');i++)
    {
        line[i]=c;
    }
    if(c=='\n')
    {
        line[i]=c;
        ++i;
    }
    line[i]='\0';
    return i;
}

void copy(void)
{
    int i = 0;
    extern char line[],longest[];
    while(line[i]!='\0')
    {
        longest[i]=line[i];
        i++;
    }
}