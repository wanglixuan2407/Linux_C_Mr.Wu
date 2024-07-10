/*binsearch*/
#include<stdio.h>
#define DATANUM 15
int binsearch(int x,int v[],int n);
int main()
{
    int x;
    int index;
    int data[]={1,2,3,4,5,6,7,8,9,10,15,19,23,27,67};
    scanf("%d",&x);
    index=binsearch(x,data, DATANUM);
    if(index!=-1)
    {
        printf("index = %d\n",index);
    }
    else{
        printf("%d is not in the array\n",x);
    }
    return 0;
}
int binsearch(int x,int v[],int n)
{
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high)
    {
        mid = (low + high)/2;
        if(x==v[mid])
        {
            return mid;
        }
        else if(x<v[mid])
        {
            high = mid -1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}