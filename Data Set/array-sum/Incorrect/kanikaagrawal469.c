#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>



int main() 
{
      int simpleArraySum(int,int *);
    int n,i,ar[20];
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
       scanf("%d",&ar[i]);
    }
    int result = simpleArraySum(n, ar);
    printf("%d\n", result);
    return 0;
}
int simpleArraySum(int n, int* ar) 
{
    // Complete this function
    int sum=0;    
   int i;
   for(i=0;i<n;i++)
    {
     sum=sum + *ar;
     ar++;
    }
    return sum;
}
