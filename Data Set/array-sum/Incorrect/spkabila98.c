#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n,arr[n],sum=0,arr_i;
    scanf("%d",&n);
    for(int arr_i = 0; arr_i < n; arr_i++)
    {
       scanf("%d",&arr[arr_i]);
        sum=sum+arr[arr_i];
    }
    printf("%d",sum);
    return 0;
}
