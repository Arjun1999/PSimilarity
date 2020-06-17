#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int arr[50],i,sum=0,n,j;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
    scanf("%d \t",&arr[i]);
    }
    for(j=0;j<n;j++)
        {
        sum=sum+arr[j];
    }
    printf("%d",sum);
    return 0;
}