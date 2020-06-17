#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],maxSum=0,minSum=0;
    int i;
    for(i=0;i<5;i++)
    scanf("%ld ",&a[i]);
   int min=a[0];
   int max=a[0];
    for(i=0;i<5;i++)
        {
        if(a[i]>=max)
            max=a[i];
        if(a[i]<=min)
            min=a[i];
    }
    if(max==min)
        {
        for(i=0;i<4;i++)
            maxSum=maxSum+a[i];
            minSum=maxSum;
    }
    else{
    for(i=0;i<5;i++)
        {
        if(a[i]==max)
            {
            continue;
         
        }
        else
            {
               minSum=minSum+a[i];
        }
    }
    for(i=0;i<5;i++)
        {
        if(a[i]==min)
            {
            continue;
        }
        else
            {
            maxSum=maxSum+a[i];
        }
    }
    }
    printf("%ld %ld",minSum,maxSum);
    return 0;
}
