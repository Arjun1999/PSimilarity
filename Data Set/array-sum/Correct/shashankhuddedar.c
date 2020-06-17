#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
 int N,i,SUM=0;
 scanf("%d",&N);
 int A[N];
 
    for(i=0;i<N;i++)
   {
     scanf("%d",&A[i]);
     SUM=SUM+A[i];
   }
   
   printf("%d",SUM); 
    return 0;
}
