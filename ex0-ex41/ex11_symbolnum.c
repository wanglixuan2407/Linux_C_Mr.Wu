/*symbolnum*/
#include<stdio.h>
int main()
{
    long n;
    n = 0;
    while((getchar())!='$'){
        ++n;
    }
    printf("The number of symbols is %ld",n);
    return 0;
}