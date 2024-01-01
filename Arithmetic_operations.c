#include<stdio.h>
int main()
{
    int a,b,sum,dif,pro,quo,rem;
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("Sum:%d
",sum);
    dif=a-b;
    printf("Difference:%d
",dif);
    pro=a*b;
    printf("Product:%d
",pro);
    quo=a/b;
    printf("Quotient:%d
",quo);
    rem=a%b;
    printf("Remainder:%d
",rem);
}