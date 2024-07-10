/*my getline:get the longest line and print*//*1 evaluate per line*/
#include<stdio.h>
#define MAXLINE 1000
int mygetline(char line[],int maxline);
void copy (char to[],char from[]);
int main()
{
    int len,max;
    char line[MAXLINE]; //character array
    char longest [MAXLINE]; 
    max = 0;
    while((len=mygetline(line,MAXLINE))>0)
    {
        if(len>max)
        {
            max = len;
            copy(longest,line);
            printf("\nThe longest line is:%s\nlength=%d\n",longest,max);
        }
        else
        {
            ;
        }
    }
    return 0;
}

int mygetline(char line[],int maxline)
{
    int c,i;
    for(i = 0;(i<maxline-1)&&((c=getchar())!='$')&&(c!='\n');i++)  /*left :c=getchar(),right:c  This way is OK*/
    {                                                              /*most clearly:c=getchar,for c=...,  c=getchar() at the end of loop*/ 
        line[i]=c;
    }
    if(c=='\n')
    {
        line[i]=c;
        ++i; //largest index = maximun length -1    // achive the goas of getting the longest line
    }
    line[i] = '\0';                 /*out of the loop:c='\n':the end of a line,need an evaluation*/
    return i;                       /*required by the question on PPT:the last symbol of a line:'\0'*/
}

void copy (char to[],char from[])
{
    int i = 0;
    while((to[i]= from[i])!='\0')   /*firstly execute !=,and then = */
    {
        i++;
    }
    /*while (from[i]!='\0')
    {
        to[i]=from[i];
        i++;
    }
    */
}