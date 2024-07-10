/*more common atoi*/
#include<stdio.h>
#include<ctype.h>
#define MAXLEN 100
/*Instrctions:1.Please end the input with $.2.Symbols '+''-'' ' are permitted to be used as a non numeric character*/
int main()
{
    int atoi(char s[]);
    char s1[]="147$";
    char s2[]="  147$";
    char s3[]="   -  147$";
    char s4[]="  +  1  4-7$";
    char s5[]="-  1= 4 $7++$"; //a warning situation
    int d;
    d = atoi(s1);
    printf("%d\n",d);
    d = atoi(s2);
    printf("%d\n",d);
    d = atoi(s3);
    printf("%d\n",d);
    d = atoi(s4);
    printf("%d\n",d);
    d = atoi(s5);
    printf("%d\n",d);
    return 0;
}

int atoi(char s[])
{
    int is = 0; //index of char s[]
    int state = 0; //state machine
    int id = 0; //index of char ds[]
    int sign = 1;
    int n = 0;//absolute value
    int ers = 0;//if no warning or error occured,ers = 0; or ers = 1
    char ds[MAXLEN];
    for(is = 0;s[is]!='$';is++)
    {
        if(state == 0)
        {
            if(s[is]==' ')
            {
                state = 0;
            }
            else if(s[is] == '-')
            {
                state = 1;
                sign = -1;
            }
            else if(s[is]=='+')
            {
                state = 1;
                sign = 1;
            }
            else if(isdigit(s[is]))
            {
                state = 1;
                sign = 1;
                ds[id++] =s[is]; 
            }
            else
            {
                printf("Warning:Invalid symbols were detected.Please restart.\n");
                ers = 1;
                break;
            }
        }
        else if(state == 1)
        {
            if(s[is]=='-'||s[is]=='+'||s[is]==' ')
            {
                state = 1;
            }
            else if(isdigit(s[is]))
            {
                ds[id++]=s[is];
            }
            else
            {
                printf("Warning:Invalid symbols were detected.Please restart.\n");
                ers = 1;
                break;
            }
        }
        else
        {
            printf("There was an error in the program,please check the code.\n");
            ers = 1; 
            break;
        }
    }
    if(ers == 0)
    {
    ds[id] = '$';
    for (id = 0;ds[id]!='$';id++)
    {
        n = n * 10 + (ds[id]-'0');
    }
    return sign * n;
    }
    else if(ers == 1)
    {
        return 0;
    }
    else
    {
        return 0;
    }
}