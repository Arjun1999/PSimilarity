#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
    int i,min=0,max=0,n,ar[i],a[i],sum=0;
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=ar[i];
           printf("%d\n",max);
        }
    }
    for(i=0;i<n;i++)
    {
        if(min>a[i])
        {
            min=ar[i];
            printf("%d\n",min);
        }   
    }
     sum=sum+a[i];
return sum;
    }
}