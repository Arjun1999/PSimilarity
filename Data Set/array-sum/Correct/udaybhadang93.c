#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int simpleproblem3(int A[],int N)
    { int sum=0, i;
    for (i=0; i<=N-1; i++)
       sum=sum+A[i];
        return (sum); }       
int main() {
  
    int N;
scanf("%d", &N);
int A[N], j;
        for (j=0; j<=N-1; j++)
        scanf("%d", &A[j]);
int y=simpleproblem3(A, N);
  printf("%d", y);
  return 0;
}
 

