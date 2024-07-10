/*traditional intersort*/
#include<stdio.h>
void intersort(int s[],int len);
int main()
{
    int z[]={2,6,7,8,5,1,3,4};
    intersort(z,8);
    return 0;
}

void intersort(int s[],int len)
{
    int i,j,k;
    int n = 0;//number of changes
    int temp;
    for(i = 1;i<len;i++)
    {
        for(j = i - 1;(j>=0) && (s[j]>s[j+1]);j--)
        {
            temp = s[j+1];
            s[j+1] = s[j];
            s[j] = temp;
            n++;
        }
    }
    for (k = 0;k<len;k++)
    {
        printf("%d%c",s[k],(k==len-1)?'\n':'\t');
    }
    printf("Number of change is %d\n",n);
}