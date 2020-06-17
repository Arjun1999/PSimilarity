#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[1000];
    int i,size,min=0,max=0;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        scanf("%d ",&a[i]);
    }
    for(i=0;i<size-1;i++)
    {
        min=min+a[i];
    }
    for(i=1;i<size;i++)
    {
        max=max+a[i];
    }
    printf("%d %d",min,max);
}