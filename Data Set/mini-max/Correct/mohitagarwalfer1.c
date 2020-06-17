#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int j;
    long long int sum,min,max=0,z; 
   long long int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }
    z=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    min=z;
        for(j=0;j<5;j++)
        {  
            sum=z-arr[j];
        if(max<sum)
         max=sum;
         if(min>sum)
       min=sum;
        }
    printf("%lld %lld",min, max) ;
    return 0;
}
