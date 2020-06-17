#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main;
{
    int i, max, min, n, sum=0, temp, maxsum, minsum;
    scanf("%d", &n);
    int a[n];
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }       
    for(i=0; i<n; i++){
        sum+=a[i];
        if(a[i]<a[0]){
            
            min=a[i];
        }
        else if(a[i]>a[0]){
            max=a[i];
        }
    }
    maxsum=sum-min;
    minsum=sum-max;
    printf("%d %d" min,max);
    return(0);
}
