#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5], arr_sum[5];
    long long int sum_max, sum_min, sum;
    int i,s;
    scanf("%lld %lld %lld %lld %lld",
          &arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    
    for(i=0; i<5; i++){
        sum=0;
        for(s=0; s<5; s++){
            if(s!=i){
                sum+=arr[s];
            }
        }
        arr_sum[i]=sum;
    }
    
    sum_max=sum_min=arr_sum[0];
    for(i=1; i<5; i++){
        if(sum_max<arr_sum[i])
            sum_max=arr_sum[i];
        if(sum_min>arr_sum[i])
            sum_min=arr_sum[i];
    }
    
    printf("%lld %lld", sum_min, sum_max);
    
    return 0;
}
