#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
               int n,i,sum=0;
               scanf("%d\n",&n);
               int A[n];
               for(i=0;i<n;i++)
                   {
                  scanf("%d\n",&A[i]);
               }
               for(i=0;i<n;i++)
                   {
                   sum=sum+A[i];
               }
    printf("%d\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
