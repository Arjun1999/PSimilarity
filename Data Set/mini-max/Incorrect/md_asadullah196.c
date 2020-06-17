#include<stdio.h>
void main()
{
    float first, mid, final, total;
    scanf("%f%f%f",&first,&mid,&final);
    
    first = first*(3/10);
    mid = mid*(3/10);
    final = final*(4/10);
    
    total = first+mid+final;
    
    if(total>90)
    {
        printf("A gred");
    }
    else if(total>80)
    {
        printf("gred B");
    }
    else if(total>70)
    {
        printf("Gred C");
    }
    else
    {
        printf("Fail");
    }
}