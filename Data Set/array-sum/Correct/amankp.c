#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int sum(int [],int);
int main() 
{
    int arr[MAX],i,n,s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);        
        }
    s=sum(arr,n);
    printf("%d",s);
    return 0;
}

int sum(int arr[],int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
        s=s+arr[i];
    return s;
}