#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i,arr[],sum;
    printf("enter number of elements in array");
    scanf("%d",&n);
    printf("enter elements in array%d",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
        sum+=arr[i];
    return 0;
}