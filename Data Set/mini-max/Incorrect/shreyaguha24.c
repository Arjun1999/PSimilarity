#include<stdio.h>
int main()
{
    int A[5];
    int i,min=A[0],max=A[0],s=0,minsum,maxsum;
    
    for(i=0;i<5;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<5;i++)
    {
        if(A[i]<min)
        {
            min=A[i];
        }
    }
    for(i=0;i<5;i++)
    {
        if(A[i]>max)
        {
            max=A[i];
        }
    }
    for(i=0;i<5;i++)
    {
        s = s+A[i];
    }
    minsum = s-max;
    maxsum = s-min;
    printf("%d %d",minsum,maxsum);
    return 0;
}
