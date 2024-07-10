/*delete the blank,'\n','\t' at the start&&end of the character*/
#include <stdio.h>
#include <string.h>
int main()
{
    void trim(char s[]);
    char s[]="    djkal     cjdsk    cdsk   ";  //1TAB=4blank
    int d = strlen(s);
    printf("%d\n",d);
    trim(s);
    return 0;
}

void trim(char s[])
{
    int i;
    i = 0;
    int st;
    st = 0;
    int start,end;
    start = end = 0;
    int d = 0;
    for(i = 0;;i++)
    {
        if(st == 0)
        {
            if(s[i]==' '||s[i]=='\t'||s[i]=='\n')
            {
                st = 0;
            }
            else if(s[i]=='\0')
            {
                printf("No valid symbol.\n");
                break;
            }
            else
            {
                start = i;
                st = 1;
            }
        }
        else if(st == 1)
        {
            if(s[i]==' '||s[i]=='\t'||s[i]=='\n')
            {
                st = 2;
                end = i - 1;  
            }
            else if(s[i]=='\0')
            {
                end = i - 1;
                for(i = start;i <= end;i++)
                {
                    printf("%c",s[i]);
                }
                printf("\n");
                d = end - start + 1;
                printf("Valid symbol number:%d.\n",d);
                break;
            }
            else
            {
                st = 1;
                end = i;
            }
        }
        else if(st == 2)
        {
            if(s[i]==' '||s[i]=='\t'||s[i]=='\n')
            {
                st = 2;
            }
            else if(s[i]=='\0')
            {
                for(i = start;i <= end;i++)
                {
                    printf("%c",s[i]);
                }
                printf("\n");
                d = end - start + 1;
                printf("Valid symbol number:%d.\n",d);
                break;
            }
            else
            {
                st = 1;
            }
        }
        else 
        {
            printf("Error,please check your code.\n");
        }
    }
}