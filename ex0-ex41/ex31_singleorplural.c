/*single or plural*/
#include<stdio.h>
#define MAXLEN 100
int main()
{
    int i = 2;
    char s[MAXLEN];
    printf("You have %d item%s",i,(i==1)?".\n":"s.\n");
    return 0;
}