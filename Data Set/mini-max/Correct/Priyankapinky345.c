#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(long int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    int i,j;
    long int *a = malloc(sizeof(long int) * 5);
    for(i=0;i<5;i++)
    {
        long int sum=0;
        for(j=0;j<5;j++)
        {
            if(j!=i)
            {
                sum+=arr[j];
            }
        }
        a[i]=sum;
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
            long int t=a[i];
            a[i]=a[j];
            a[j]=t; 
            }
        }
    }
    printf("%ld %ld",a[0],a[4]);
    return 0;
}
