#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i, arr[6] = {1,2,3,4,10,11},sum,  num = 6;
 
 
   //Computation of total
   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];
 
 
   //Printing of total
   printf("%d", sum);
 
   return (0);
}
