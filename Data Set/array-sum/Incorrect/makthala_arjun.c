#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    
    int i, n, sum=0;

    /* Input size of the array */
        scanf("%d", &n);
int arr[n];
    /* Input elements in array */
        for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    /*
     * Add each array element to sum
     */
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    printf(" %d", sum);

    return 0;
}
