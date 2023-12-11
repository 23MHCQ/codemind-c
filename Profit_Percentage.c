#include<stdio.h>
int main()
{
    float x,y,z;
    scanf("%d%d",&x,&y);
    z=(y-x)/x*100;
    printf("%.2f",z);
}