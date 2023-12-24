#include<stdio.h>
int main()
{
    int sal;
    scanf("%d",&sal);
    float Gross,DA,HRA;
    if(sal<=10000)
    {
        DA=sal*0.80;
        HRA=sal*0.20;
    }
    else if (sal<=20000)
    {
        DA=sal*0.90;
        HRA=sal*0.25;
        
    }
    else if(sal>20000)
    {
        DA=sal*0.95;
        HRA=sal*0.30;
    }
    Gross=sal+DA+HRA;
    printf("%.2f",Gross);
    
}