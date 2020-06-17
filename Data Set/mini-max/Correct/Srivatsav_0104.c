#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long *a = malloc(sizeof(long) * 5);
    int i,j,min;
    long maxsum=0,minsum=0;
    for(i = 0; i < 5; i++)
    {
       scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[j]<a[i])
            {
                min=a[j];
                a[j]=a[i];
                a[i]=min;
            }
                
        }
        
    }
    for(i=0;i<4;i++)
    {
        maxsum=maxsum+a[i];
    }
    for(i=4;i>0;i--)
    {
        minsum=minsum+a[i];
    }
    printf("%ld",minsum);
    printf(" ");
    printf("%ld",maxsum);
    return 0;
}
