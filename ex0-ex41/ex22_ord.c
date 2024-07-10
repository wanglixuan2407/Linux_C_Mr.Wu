/*order in C*/
#include<stdio.h>
int main()
{
    int i,j;//declaration of variables 
    i = j = 0;//initialize the variables
    if(++i==1 || ++j>0)  //first i=i+1=1, second:1==1,third:the formula in if has been true, stop evaluation! j remains 0 instead of j=j+1
    {                    //if i++ i=1,j=1 because after i++ , the original i is used,while ++i uses the changed/current i 
        printf("i=%d,j=%d\n",i,j);  //i=1,j=0
    }
    else
    {
        ;
    }
    i=j=0;
    if(++i!=1 || ++j>0)
    {
        printf("i=%d,j=%d\n",i,j);  //i=1,j=1
    }
    else
    {
        ;
    }
    return 0;
}