#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int a[5],i,b[5];
    for(i=0;i<5;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        int j;
        long int s=0;
        for(j=0;j<5;j++)
        {
            if(i!=j)
            {
                s=s+a[j];
            }
        }
        b[i]=s;
    }
    long int max=b[0],min=b[0];
    for(i=0;i<5;i++)
    {
        if(max<b[i])
        {
            max=b[i];
        }
        if(min>b[i])
        {
            min=b[i];
        }
    }
    printf("%ld %ld",min,max);
    return 0;
}
