#include<stdio.h>
int main()
{
    int c=0,r,n;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        c++;
        n=n/10;
    }
    printf("%d",c);
    
}