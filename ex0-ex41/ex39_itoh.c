/*int to hex*/
#include<stdio.h>
#include<string.h>
#define MAXLEN 1000
void itoh(int x,char s[]);
void reverse(char s[]);
int main()
{
    //void itoh(int x,char s[]);
    char s[MAXLEN];
    int x;
    scanf("%d",&x);
    itoh(x,s);
    printf("The hexadecimal is %s\n ",s);
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

void itoh(int x,char s[])
{
    unsigned int k,m;// convert int to unsigned int  PPT 6-2   
    int i = 0;
    k = x;
    do{
        m = k&0xf; //00000...001111 reverse the last 4 bits   or m=k%16;
        s[i]=(m<10)? m +'0': m - 10 + 'A'; 
        k>>=4; // or k/=16;
        i++;
    }while(k>0);
    s[i++]='X';s[i++]='0';s[i]='\0';  //end of a character
    reverse(s);
}

