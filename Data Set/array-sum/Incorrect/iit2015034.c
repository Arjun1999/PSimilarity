#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { int N, sum = 0, c, array[100];
 
   scanf("%d", &N);
 
   for (c = 0; c < N; c++)
   {
      scanf("%d", &array[c]);
      sum = sum + array[c];
   }
 
   printf("%d \n",sum);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
