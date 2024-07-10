/*squeeze the same symbol with c in character series s*/
#include<stdio.h>
#define MAXLEN 100
void squeeze(char s[],int c);
int main()
{
    //char str[] = "Hello,world!";
    char str[MAXLEN];
    scanf("%s",str);
    int c = 'l';         
    squeeze(str,c);
    printf("%s",str);
    return 0;
}

void squeeze(char s[],int c)
{
    int i,j;
    for(i = j = 0;s[i]!='\0';i++)
    {
        if(s[i]!= c )
        {
            s[j++]=s[i];  //s[j]=s[i];j++;
        }
        else
        {
            ;//No operation  if write s[j] = '\0'&&  
             // without s[j]= '\0' out of the for loop:at last ,No'\0'would be detected and part of series will be repeated 
        }    //continue :the code mentioned above: if end with l(int c),normal;or abnormal!!   Appriciate : Boyan Yang  
    }
    s[j]='\0';//if same, j remains,instead of j++ with i++  '\0': "delete","end", NOT blank(' ')
}