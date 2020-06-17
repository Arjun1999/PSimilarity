#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    int i,a,Amax=0,Amin=0;
    long long max=0,min=0;
    for(i = 0;i < 5; i++){
       scanf("%d",&arr[i]);
        max= max+arr[i];
        min = min+arr[i];
    }
    
    for(i=0;i<4;i++)
    {
        if(arr[Amax]<arr[i+1])
            Amax=i+1;
        
        if(arr[Amin]>arr[i+1])
            Amin=i+1;
    }

    
    max = max-arr[Amin];
    min = min-arr[Amax];
    
    printf("%lld %lld",min,max);
    return 0;
}
