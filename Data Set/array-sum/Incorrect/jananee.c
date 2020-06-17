#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#include<stdio.h>
 
int main() {
   int i, arr[6], sum, n;
 

   scanf("%d", &n);
 
   
   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);
 
  
   sum = 0;
   for (i = 0; i < n; i++)
      sum = sum + arr[i];
 
 
   for (i = 0; i <n; i++)
      printf("\na[%d]=%d", i, arr[i]);
 

   printf("\nSum=%d", sum);
 
   return (0);
}