#include <stdio.h>

int main() {
   int array[10] = {1, 2, 3, 4,10,11};
   int sum, loop;

   sum = 0;
   
   for(loop = 6; loop >= 0; loop--) {
      sum = sum + array[loop];      
   }

   printf("%d", sum);   

   return 0;
}
