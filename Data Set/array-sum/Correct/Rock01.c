#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
   int main()
   {
   int n, sums = 0, i, array[1000];
 
   scanf("%d", &n);
 
   for (i = 0; i < n; i++)
   {
      scanf("%d", &array[i]);
      sums = sums + array[i];
   }
 
   printf("%d",sums);
 
   return 0;


 
}
