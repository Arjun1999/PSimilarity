#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int numArray[10];
   int i, sum = 0;
   int *ptr;

   //printf("\nEnter 10 elements : ");

   for (i = 0; i < 6; i++)
      scanf("%d", &numArray[i]);

   ptr = numArray; /* a=&a[0] */

   for (i = 0; i < 6; i++) {
      sum = sum + *ptr;
      ptr++;
   }

   printf("The sum of array elements : %d", sum);  
    return 0;
}
