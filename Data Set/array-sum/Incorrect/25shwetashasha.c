#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int i, n, sum=0; 
    scanf("%d",&n);
    long a[1000];
    for(i = 0; i < 1000; i++)
    {
       scanf("%d",&a[i]);
    }
    for(i = 0; i < 1000; i++)
    {
        sum = sum + a[i];
    }
    printf("%d", sum);
    return 0;
}
