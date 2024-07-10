//*filenum*/
#include<stdio.h>
int main()
{
    int BlankNum(int x, int y);
    int LineNum(int x, int y);
    int SymbolNum(int x, int y);
    int c;
    int nw, nl, ns, nb, state;  //state:determine if there are any valid symbols before next '\n'or ' '.
    nw = nl = ns = nb = 0;
    state = 0;
    while ((c = getchar()) != '$') /*use $ instead of $*/
    {
        if((c!='\n')&&(c!=' '))
        {
            if(state == 0)
            {
                nw = nw + 1;
                state = 1;
            }
            else 
            {
                ;
            }
        }
        else
        {
            state = 0;
        }
        nl = LineNum(c, nl);
        nb = BlankNum(c, nb);
        ns = SymbolNum(c, ns);
    }
    printf("Word number:%d\n Line number:%d\n Blank number:%d\n Symbol number:%d\n", nw, nl, nb, ns);
}

int BlankNum(int x, int y)
{
    if(x == ' ')
    {
        y = y + 1;
    }
    else
    {
        ;
    }
    return y;
}

int LineNum(int x, int y)
{
    if (x == '\n')
    {
        y = y + 1;
    }
    else
    {
        ;
    }
    return y;
}

int SymbolNum(int x, int y)
{
    if ((x != '\n') && (x != ' '))
    {
        y = y + 1;
    }
    else
    {
        ;
    }
    return y;
}


/*int main()
{
    int c,nl,nw,nc,state;
    state = 0;
    nw=nc=nl=0;
    while((c=getchar())!=EOF)
    {
        ++nc;
        if(c=='\n')
        {
            ++nl;
        }
        else
        {
            ;
        }
        if(c==' '||c=='\t'||c=='\n')
        {
            state = 0;
        }
        else if(state==0)
        {
            ++nw;
            state = 1;
        }
    }
    printf("nl=%d,nc=%d,nw=%d",nl,nc,nw);
    return 0;
}*/