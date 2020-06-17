#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void enter(int arr[],int n);
void sum(int arr[],int n);
int main()
{
    int n;
    int arr[100];
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements");
    enter(arr[],n);
    printf("sum of array elements is\n");
    sum(arr[],n);
    return 0;
}
void enter(int arr[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void sum(int arr[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}
