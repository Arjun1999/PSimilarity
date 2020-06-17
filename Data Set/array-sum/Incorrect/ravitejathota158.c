#include<stdio.h>
int main() {
   int array[6]={1,2,3,4,10,11};
   int sum, loop; 

   sum = 0;
   
   for(loop = 0; loop <=5; loop++) {
      sum = sum + array[loop];      
   }

   printf("Sum of array is %d.", sum);   

   return 0;
}
