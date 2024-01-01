#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%100<10)printf("0");
    printf("%d",a%100);
    
}