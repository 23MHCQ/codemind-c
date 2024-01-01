#include<stdio.h>
int main()
{
    int n,i;
    float sum=0.0,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        r=(float)1/i;
        sum=sum+r;
    }
    printf("%.2f",sum);
}