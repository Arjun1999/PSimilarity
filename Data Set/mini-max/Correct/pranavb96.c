#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],b[5];
    int i,minI=0,maxI=0;
    long int sum=0;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
        sum+=a[i];
        
    }
    for(i=0;i<5;i++)
        {
        b[i]=sum-a[i];
    }
    for(i=1;i<5;i++)
        {
        if(b[minI]>b[i])
            {
            minI=i;
        }
        if(b[maxI]<b[i])
            {
            maxI=i;
        }
    }
    printf("%ld %ld",b[minI],b[maxI]);
    return 0;
}
