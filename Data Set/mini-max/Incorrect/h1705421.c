#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int findmin(int arr[],int n)
{
    int min=arr[0];
    int i=1;
    while(i<n)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        i++;
    }

    return min;
}

 int findmax(int arr[],int n)
{
  int  max=arr[0];
    int i=1;
    while(i<n)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
        i++;
    }
    return max;
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=findmin(arr,n);
    int max=findmax(arr,n);
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=max)
        {
            sum1=sum1+arr[i];
        }
        if(arr[i]!=min)
        {
            sum2=sum2+arr[i];
        }
    }
    printf("%d  %d",sum1,sum2);
}
