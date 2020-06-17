#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    
     int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    
    int j=0,count=0;
    long long int sum=0,ar[5],min,max;
    
    for(j=0;j<5;j++){
    
      sum = sum + arr[j];
     
    }

    for(j=0;j<5;j++){
    
      ar[j] = sum -arr[j];

    }
    
    min = max = ar[0];
    for(int i=1;i<5;i++){
        
        if(min > ar[i])
            min = ar[i];
        
        if(max < ar[i])
            max = ar[i];
    }
    printf("%lld %lld",min,max);
    
    return 0;
}
