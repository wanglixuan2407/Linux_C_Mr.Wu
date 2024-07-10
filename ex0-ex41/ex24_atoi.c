/*char to int:atoi*/
#include<stdio.h>
#define MAXLEN 100
int main()
{
    int atoi(char s[]);
    int n;//result
    char s [MAXLEN];
    scanf("%s",s);
    n = atoi(s);
    printf("%d\n",n);
    return 0;
}

int atoi(char s[])
{
    int i ;//index
    int res = 0;//result
    for(i = 0; ((s[i]>='0')&&(s[i]<='9'));i++)
    {
        res = res * 10 + (s[i]-'0');//-'0' NOT '\0'
    }
    return res;//DO NOT FORGET!
}