#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();
char** split_string(char*);

/*
 * Complete the simpleArraySum function below.
 */
int aSum(int ar[], int n) {
    /*
     * Write your code here.
     */
     int i,sum=0;
     for(i=0;i<n;i++)
         sum=sum+ar[i];
    return sum;
}

int main()
{
      
    int ar[]= {1,2,3,4,10,11};
    int n = sizeof(ar) / sizeof(ar[0]); 
    printf("%d", aSum(ar,n));
    return 0;
}
