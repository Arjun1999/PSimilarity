#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long smallest,largest,sum=0;
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
    }
    smallest=arr[0];
     for(int i = 0; i < 5; i++){
        if(arr[i]<smallest)
            smallest=arr[i];
    }
  largest=arr[0];
    for(int i = 0; i < 5; i++){
        if(arr[i]>largest)
            largest=arr[i];
        
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("%ld %ld",sum-largest,sum-smallest);
    return 0;
}
