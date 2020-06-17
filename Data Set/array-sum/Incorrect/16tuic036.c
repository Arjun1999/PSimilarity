#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
 
int main()
{
   int no, sums = 0, c, array[100];
 
   scanf("%d", &no);
 
   for (c = 0; c < no; c++)
   {
      scanf("%d", &array[c]);
      sums = sums + array[c];
   }
 
   printf("%d\n",sums);
 
   return 0;
}
