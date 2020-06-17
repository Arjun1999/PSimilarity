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
    int n,min=0,max=0;
    
    int i,j,k;
    
    int ar[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<4;i++)
    {
        min=min+ar[i];
    }
    for(i=0;i<5;i++)
    {
        max=max+ar[i];
    }
printf("%d ",min);
printf("%d",max);
return  0;
}
