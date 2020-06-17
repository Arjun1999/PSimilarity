#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i,j;
    long a[1000000],b[1000000],max,min,sum=0;
    for(i=0;i<5;i++)
    {
        scanf("%ld ",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
        {
            if(i!=j)
            {
                sum=sum+a[j];
            }
        }
        b[i]=sum;
        sum=0;
    }
    max=b[0];min=b[0];
    for(i=0;i<5;i++)
    {
        if(b[i]<min)
            min=b[i];
        if(b[i]>max)
            max=b[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
