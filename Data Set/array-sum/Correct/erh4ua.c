#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>    

int main() {

   int n, sum = 0, c, value;
   scanf("%d", &n);
 
   for (c = 1; c <= n; c++)
   {
      scanf("%d", &value);
      sum = sum + value;
   }
 
   printf("%d",sum);
 
   return 0;
    
}
