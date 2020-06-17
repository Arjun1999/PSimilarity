#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i;
    double arr[5],max=0,min=0,sum=0;
    for(i = 0; i < 5; i++){
       scanf("%lf",&arr[i]);
        sum=sum+arr[i];
    }
    max=arr[0];
    for(i=0;i<5;i++){
        if(max < arr[i])
           max = arr[i];
    }
    printf("%.f ", sum-max);
    min=arr[0];
    for(i=0;i<5;i++){
        if(min > arr[i])
           min = arr[i];
    }
    printf("%.f", sum-min);
    
    return 0;
}
