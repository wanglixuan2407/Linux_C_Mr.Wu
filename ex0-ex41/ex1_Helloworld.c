/*Hello,world*/
/*printf*/
#include<stdio.h>
int main()
{
    int c;
    char s[2]="ab";// if abc the result is ab(C:international general provisions left to right)
    c = (s[2]=='\0');
    printf("%d\n",c);
    printf("%s\n",s);
    printf("Hello,world!\n");
    return 0;
}
