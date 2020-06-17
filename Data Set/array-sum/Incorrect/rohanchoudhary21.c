#include<stdio.h>
int sum(int [],int );
int main()
{
    int n;
    scanf("%d\n",&n);
    
    int arr[n];
    int i;
    for (i=0;i<n;i++)
    scanf("%d",&arr[i]);
    c=sum(arr,n);
}
sum(int arr,int n)
{
    register int j=0,sum=0;
    for(j=0;j<n;j++)
    {
        sum = sum + arr[j];
    }
}
