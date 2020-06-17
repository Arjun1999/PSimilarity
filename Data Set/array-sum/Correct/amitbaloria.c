#include <stdio.h>
int sum1(int arr[],int t)
{
    int sum=0,i;
    for(i=0;i<t;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main() 
{
    int t,i;
    scanf("%d",&t);
    int arr[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",sum1(arr,t));
    return 0;
}
