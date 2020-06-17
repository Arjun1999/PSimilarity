#include<stdio.h>
 
int main() {
   int i, arr[6], sum, num;
 

   printf("\nEnter the values :");
   for (i = 0; i < 6; i++)
      scanf("%d", &arr[i]);
 
     sum = 0;
   for (i = 0; i < 6; i++)
      sum = sum + arr[i];

 
   printf("\nSum=%d", sum);
 
   return (0);
}