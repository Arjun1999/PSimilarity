#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int arr[5];
   long int max,min;
   long long int sum = 0;
    int i;
   for(i = 0; i < 5; i++)
   {
     scanf("%ld", &arr[i]);
   }
   max = arr[0];
   min = arr[0];
   for(i =0; i < 5; i++)
   {
     if (max < arr[i])
     {
      max = arr[i];
     }
     if (min > arr[i])
     {
       min = arr[i];
     }
     sum += arr[i];
   }
  printf("%lld %lld", sum-max, sum-min);
      return 0;
   
}
