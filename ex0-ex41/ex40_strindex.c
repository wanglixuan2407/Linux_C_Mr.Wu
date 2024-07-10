/*find the sentence with identical string and print it out*/
#include<stdio.h>
#include<string.h>
#define MAXLEN 1000
int mygetline(char s[],int lim);
int strindex(char s[],char t[]);  // s:input ; t:pattern
char pattern[]="ould";
int main()
{
    char line[MAXLEN];
    int found = 0;
    while(mygetline(line,MAXLEN)>0)
    {
        if(strindex(line,pattern)>=0)
        {
            printf("%s",line);
            found ++ ;
        }
    }
    printf("found = %d",found);
    return found;
}

int mygetline(char s[],int lim)  /*save lines to s & return the length of line*/
{
    int c,i;
    i = 0;
    while(--lim>0 &&((c=getchar())!='$'&& c!='\n'))  //end by $
    {
        s[i++] = c;
    }
    if(c == '\n')
    {
        s[i++]='\n';
    }
    else
    {
        ;
    }
    s[i]='\0';
    return i;
}

int strindex(char s[],char t[])  /*return t's position in s, if t does not exist in s,return -1 */
{
    int i,j,k;
    for(i = 0;s[i]!='\0';i++)
    {
        for(j = i,k = 0;t[k]!='\0'&& s[j]==t[k];j++,k++)
        {
            ;
        }
        if(k > 0 && t[k]=='\0')
        {
            return i;
        }
        else
        {
            ;
        }
    }
    return -1;
}
