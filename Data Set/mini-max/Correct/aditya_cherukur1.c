#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
     long sum=0,i,a[1000],b[1000];
        for(i=0;i<5;i++)
        {
            scanf("%ld",&a[i]);
            sum=sum+a[i];
        }
         for(i=0;i<5;i++)
        {
            b[i]=sum-a[i];
        }
        long max=b[0],min=b[0];
        for(i=0;i<5;i++)
        {
        if(b[i]>max)
            max=b[i];
        else if(b[i]<min)
            min=b[i];
        }
         printf("%ld %ld",min,max);
}
