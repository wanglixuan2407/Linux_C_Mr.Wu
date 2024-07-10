/*Shell sort(faster than traditional method)*/
#include<stdio.h>

int main()
{
    void shellsort(int s[],int len);
    int s[]={5,6,2,7,3,4,9,8,1,10,16,15,13,12,14,11,17,18,19};
    int len = sizeof(s)/sizeof(int);
    //printf("%d,%d",len,gap);
    shellsort(s,len);
    int i = 0;
    for(i = 0;i < len;i++)
    {
        printf("%d%c",s[i],(i==len-1)?'\n':'\t');
    }
    return 0;
}

void shellsort(int s[],int len)
{
    int i,j= 0;
    int n = 0;
    int gap = len/2;
    int temp;
    for(gap = len/2;gap>0;gap/=2)
    {
        for(i = gap;i<len;i+=gap)
        {
            for(j = i-gap;j>=0;j-=gap)
            {
                if(s[j]>s[j+gap])
                {
                    temp = s[j+gap];
                    s[j+gap] = s[j];
                    s[j] = temp;
                    n++;
                }
            }
        }
    }
    printf("The number of exchange is %d\n",n);
}