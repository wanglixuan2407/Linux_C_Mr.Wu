/*int to character PPT5-2 P61 62*/
#include<stdio.h>
#include<string.h>
#define NUM -45679
#define MAXLEN 100
void reverse(char s[]);
int main()
{
    int sign,n;
    sign = n = NUM;
    int i = 0;
    char s[MAXLEN];
    if(sign>0)
    {
        ;
    }
    else
    {
        n = -n;
    }
    for(i = 0;n > 0;i++)
    {
        s[i]= n%10 +'0';
        n/=10;
    }
    if(sign>0)
    {
        ;
    }
    else
    {
        s[i++]='-';
    }
    s[i]='\0';
    reverse(s);
    for(i = 0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}

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
    //int n = strlen(s);printf("%d\n",n);
    for(j = 0;j<=(len/2)-1;j++)  //detail:if len even eg 0-51:index len/2-1 exchange with index len/2  
    {                            //if len odd eg 0-50 index len/2 exchange with len/2 at last
        //temp[0] = s[j];
        c = s[j];
        s[j] = s[len-1-j];
        //s[len-1-j] = temp[0];
        s[len-1-j] = c;
    }
}