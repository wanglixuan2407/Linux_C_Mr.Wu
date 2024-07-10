/*word num*/
#include<stdio.h>
int main()
{
    int nw = 0;
    int state = 0;
    int c;
    while((c=getchar())!=EOF)
    {
        if((c=='\n')||(c==' ')||(c=='\t'))
        {
            if(state == 0)
            {
                state = 0;
            }
            else
            {
                nw = nw + 1;
                state = 0;
            }

        }
        else
        {
            state = 1;
        }
    }
    if(state==1)
    {
        nw = nw + 1;
    }
    else
    {
        ;
    }
    printf("%d word(s)",nw);
    return 0;
}