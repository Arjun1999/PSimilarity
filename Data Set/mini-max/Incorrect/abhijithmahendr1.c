#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() 
{
   int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n),sum=0,sum1=0;
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
     for(int ar_i = 1; ar_i < n-1; ar_i++)
     {
         sum+=ar[ar_i];
     }
 for(int ar_i = n; ar_i >2; ar_i--)
 {
     sum1+=ar[ar_i];
 }
    return 0;
}
