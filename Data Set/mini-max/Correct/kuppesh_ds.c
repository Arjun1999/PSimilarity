#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void max_min_of_array(int a[], int n)
{
    int max=0, min=0, i=0;
    long int sum=0;
    
    sum = max=min=a[0];
    
    for(i=1; i<n;++i)
    {
        sum += a[i];
        if(a[i] < max)
        {
            if(a[i]<min)
            {
                min = a[i];
            }
        }
        else
        {
            max = a[i];
        }
    }
    printf("%ld %ld\n", (sum- max), (sum - min));
}
int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    max_min_of_array(arr, 5);
    return 0;
}
