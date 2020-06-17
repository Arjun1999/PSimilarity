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
int simpleArraySum(int ar_count, int* ar) {
    
    int sum=0;
    for(int i=0;i<ar_count;i++)
    {
        sum+=ar[i];
    }
    return sum;
}
    int main()
    {
    int n,arr[100],i;
    scanf("%d",&n);
    printf("length of the array:%d",n);
    for(i=0;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        for(i=0;i<=n;i++)
        {
          printf("elements of an array: %d",arr[i]);
        }
    }
    printf("sum of given array is %d",simpleArraySum(arr,n));
    return 0;
    }
   /* Write yoinur code here.
     */

