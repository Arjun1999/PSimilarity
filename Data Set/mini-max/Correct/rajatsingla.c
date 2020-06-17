#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long long int sum=0,maxsum,minsum;
    int i,max,min;
    int *a = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++){
       scanf("%d",&a[i]);
    }
    sum=a[0];
    max=a[0];
    min=a[0];
    for(i=1;i<5;i++){
    if(a[i]>max)
        max=a[i];
    
    if(a[i]<min)
        min=a[i];
        
     sum=sum+a[i];
    }
    
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
