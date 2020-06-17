#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int i,max=0,min;
    long long int sum=0;
    int *arr = malloc(sizeof(long int) * 5);
    for(int i = 0; i < 5; i++){
       scanf("%d",&arr[i]);
       if(arr[i]>max)
       max=arr[i];
       if(i==0)
       min=arr[i];
       if(arr[i]<min)
       min=arr[i];          
       sum=sum+arr[i];
    }
    printf("%Ld %Ld",sum-max,sum-min);
    return 0;
}
