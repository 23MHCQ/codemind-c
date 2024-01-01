#include<stdio.h>
int main()
{
    float a,b,c,d,e,f;
    scanf("%f%f%f",&b,&c,&d);
    e=(b/100)*12;
    a=c+d+e+b;
    printf("%.2f
%.2f",e,a);
}