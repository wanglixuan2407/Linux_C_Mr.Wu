/*length of character string without blank*/
#include<stdio.h>
#define MAXLEN 1000
int mystrlen(char s[]);
int main()
{
    char mystring[MAXLEN];
    int len = 0;
    scanf("%s",mystring);
    len = mystrlen(mystring);
    printf("Len=%d\n",len);
    return 0;
}

int mystrlen(char s[])
{
    int i;
    i = 0;
    while(s[i]!='\0')/*'\0' is the end of a character string*/
    {
        i++;
    }
    return i;
}