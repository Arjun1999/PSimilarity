#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int numArray[1000];
   int i, sum = 0,n;
   int *ptr;

   scanf("%d\n",&n);

   for (i = 0; i < n; i++)
      scanf("%d", &numArray[i]);

   ptr = numArray; /* a=&a[0] */

   for (i = 0; i < n; i++) {
      sum = sum + *ptr;
      ptr++;
   }

   printf("%d", sum);   
    return 0;
}
