#include<stdio.h>
#include<stdlib.h>
#define max 100;
int main()
{
    int n;
    int i;
    int arr[i];
    printf("enter the size of array \n");
    scanf("%d",&n);
    printf("enter the data\n");
    if(n>0 && (arr[i] < 1000))
    {
        for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
        }
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("the sum of the numbers is %d",sum);
    return 0;
}
