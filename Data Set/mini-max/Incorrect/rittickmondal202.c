#include<stdio.h>
int main()
{
    long int a[5],i,j,min,max,t=0;
    for(i=0;i<5;i++)
    scanf("%ld",&a[i]);
    min=0;
    max=0;
    for(i=0;i<4;i++)
        min=min+a[i];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i!=j)
             t=t+a[j];
        }
        if(t>max)
        max=t;
        if(min>t)
        min=t;
        t=0;
    }
    printf("%ld  %ld",min,max);
    return 0;
}

