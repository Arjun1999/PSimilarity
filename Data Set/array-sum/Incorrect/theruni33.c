#include<stdio.h>
 
int main() {
   int i, arr[6], sum, num;
 
   
   scanf("%d", &num);
 
   for (i = 0; i < num; i++)
      scanf("%d", &arr[i]);
 
   //Computation of total
   sum = 0;
   for (i = 0; i < num; i++)
      sum = sum + arr[i];
 
  
 
   //Printing of total
   printf("%d", sum);
 
   return (0);
}