/*link a character with the end of another character*/
#include<stdio.h>
#define MAXLEN 100

int main()
{
    void strlink(char clf[],char clb[],char re[]);
    char clfro[MAXLEN];
    char clbeh[MAXLEN];
    char res[MAXLEN];
    scanf("%s",clfro);
    scanf("%s",clbeh);
    strlink(clfro,clbeh,res);
    printf("%s+%s=%s\n",clfro,clbeh,res);
    return 0;
}

void strlink(char clf[],char clb[],char re[])
{
    int ire,icf,icb;
    for(ire = icf = 0;clf[icf]!='\0';ire++)
    {
        re[ire]=clf[icf];
        icf++;
    }
    //ire = icf + 1;  Attention: This line is wrong: if icf++,clf[icf]='\0',ire==icf because of for loop grammar && re[ire]=='\0'
    for(icb = 0;clb[icb]!='\0';ire++)
    {
        re[ire]=clb[icb];
        icb++;
    }
    re[++ire]='\0';
}