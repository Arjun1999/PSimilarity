#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*
 * Complete the simpleArraySum function below.
 */
int simpleArraySum(int ar_count, int ar[]) {
    /*
     * Write your code here.
     
    */
    int j;
    for(j=0;j<ar_count-1;j++)
    {
       ar[j+1]=ar[j]+ar[j+1]; 
    }
return ar[ar_count-1];
}

int main()
{   
    int ar_count,i,k,ar[8];
 scanf("%d",&ar_count);
    for(i=0;i<ar_count;i++)
    {
       scanf("%d",&ar[i]); 
    }
   k= simpleArraySum(ar_count,ar);
    printf("%d",k);
    
}
