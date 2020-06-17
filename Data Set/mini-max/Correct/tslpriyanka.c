#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int max,min,i,j;
    long int o1,o2,sum=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    min=arr[0];
    max=arr[0];

    for(i=1;i<5;i++)
    {
     if(max<arr[i])
     {
       max=arr[i];
     }
    }
    for(j=1;j<5;j++)
    {
     if(arr[j]<min)
     {
       min=arr[j];
     }
    }

    for(i=0;i<5;i++)
     {
      sum=sum+arr[i];
     }

o1=sum-max;
o2=sum-min;
printf("%ld %ld",o1,o2);
    return 0;
}
