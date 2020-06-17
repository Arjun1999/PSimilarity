#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int A[MAX];
   int i, sum = 0,N;
   int *ptr;
 
   scanf("%d",&N);
 
   for (i = 0; i < N; i++)
      scanf("%d", &A[i]);
 
   ptr = A; /* a=&a[0] */
 
   for (i = 0; i < N; i++) {
      sum = sum + *ptr;
      ptr++;
   }
 
   printf("%d", sum);
    return 0;
}
