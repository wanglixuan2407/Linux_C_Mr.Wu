/*maxlength&print*/
#include<stdio.h>
int main()
{
    int cur_len = 0;
    int max_len = 0;
    int c;
    while((c=getchar())!='$')
    {
        if((c==' ')||(c=='\n')||(c=='\t'))
        {
            if(cur_len>=max_len)
            {
                max_len = cur_len;
                cur_len = 0;
            }
            else
            {
            max_len = max_len;
            cur_len = 0;
            }
        }
        else
        {
            cur_len = cur_len + 1;
        }
    }
    printf("max_len=%d",max_len);
    return 0;
}