#include<stdio.h>
int main()
{
    inr arr[100],i,n,sum=0;
    printf("enter the size");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        sum=sum+arr[i];
        printf("%d",sum);
    }
}