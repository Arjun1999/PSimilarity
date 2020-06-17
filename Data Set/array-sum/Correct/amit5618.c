#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,i,sum=0;
    int *A;
    scanf("%d",&n);
    A = (int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
   for(i=0;i<n;i++)
       sum = sum + A[i];
    printf("%d",sum);
    
    return 0;
}
