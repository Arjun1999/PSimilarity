#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long  *arr = malloc(sizeof(long ) * 5);
    long  i,s=0,max,min;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    max=arr[0];min=arr[0];
    for(i=0;i<5;i++)
    {
        if(arr[i]>max)
            max=arr[i];
        else if(arr[i]<min)
            min=arr[i];
        s+=arr[i];
    }
    printf("%ld %ld",s-max,s-min);
    return 0;
}
