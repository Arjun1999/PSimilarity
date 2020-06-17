#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,x,sum=0;
    scanf("%d",&x);
    int A[x];
    i=x-1;
    for (;i>=0;i--)
        scanf("%d",&A[i]);
    for (;i<x;i++)
        sum=sum+A[i];
    printf("%d",sum);
    return 0;
}
