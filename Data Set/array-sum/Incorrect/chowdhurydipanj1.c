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
int simpleArraySum(int ar_count, int ar[10]) 
{
    int c=0;
    for(int i=0;i<ar_count;i++)
    {
        c=ar[i]+c;
    }
    return c;
}

int main()
{
    int n,a[10];
    printf("enter the number of elements:-");
    scanf("%d",&n);
    printf("enter the each array:-");
    for(int j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    printf(simpleArraySum(n,a[]));
    return 0;
}
