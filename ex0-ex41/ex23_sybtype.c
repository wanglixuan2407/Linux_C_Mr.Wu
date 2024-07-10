/*calculation between diffrent types of variables*/
#include<stdio.h>
int main()
{
    int a,b= 0;
    a=(-1L<1U);
    printf("%d\n",a);
    b = (-1L<1UL);
    printf("%d\n",b);
    
    char s='a';
    int c = 1;
    printf("s+c=%d\n",s+c);

    int e = 5;
    float f =3.84;
    e = f;
    printf("e=%d\n",e);
    e = 5;
    f = e;
    printf("f=%.2f\n",f);//round to the nearest hundredth  baoliu2weixiaoshu
    return 0;
}