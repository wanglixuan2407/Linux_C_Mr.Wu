/*reverse the symbols in a character*/
#include<stdio.h>
#include<string.h>
#define MAXLEN 1000
void reverse(char s[]);
int main()
{
    char s[MAXLEN];
    int i = 0;
    scanf("%s",s);
    reverse(s);
    for(i = 0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    int c = s[1];
    printf("%d,%c",c,c);//%d ASCII %c symbol
    return 0;
}

void reverse(char s[])
{
    int c,i,j;
    for(i = 0,j = strlen(s)-1;i<j;i++,j--)
    {
        c = s[i];s[i] = s[j];s[j] = c;
    }
}

/*myself
void reverse(char s[])
{
    int j = 0;
    //char temp[1];
    int c;
    int len = 0;
    for(j = 0;s[j]!='\0';j++)
    {
        len += 1;
    }
    int n = strlen(s);printf("%d\n",n);
    for(j = 0;j<=(len/2)-1;j++)  //detail:if len even eg 0-51:index len/2-1 exchange with index len/2  
    {                            //if len odd eg 0-50 index len/2 exchange with len/2 at last
        //temp[0] = s[j];
        c = s[j];
        s[j] = s[len-1-j];
        //s[len-1-j] = temp[0];
        s[len-1-j] = c;
    }
}*/