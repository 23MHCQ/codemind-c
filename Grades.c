#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    float per;
    per=(total*100.0)/500.0;
    if(per>=90.0)
    {
        printf("Grade A");
    }
    
    else if(per>=80.0)
    {
        printf("Grade B");
    }
    else if(per>=70.0)
    {
        printf("Grade C");
    }
    else if(per>=60.0)
    {
        printf("Grade D");
    }
    else if(per>=40.0)
    {
        printf("Grade E");
    }
    else if(per<40.0)
    {
        printf("Grade F");
    }
}