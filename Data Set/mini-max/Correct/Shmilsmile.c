#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int *arr = malloc(sizeof(int) * 5);
    long i=0,minvalue=0,maxvalue=0,sum=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
   for(i=0;i<5;i++){
        sum+=arr[i];
    }
    minvalue=maxvalue=sum-arr[0];
    for(i=0;i<5;i++)
    {
      if(minvalue>=(sum-arr[i]))minvalue=sum-arr[i];
      if(maxvalue<=(sum-arr[i]))maxvalue=sum-arr[i];
    }
    printf("%ld %ld",minvalue,maxvalue);
    return 0;
}
