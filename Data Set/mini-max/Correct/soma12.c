#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    unsigned long long min,max;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<5;i++){
        unsigned long long sum=0ULL;
        for(int j=0;j<5;j++){
            if(i!=j){sum+=arr[j];}
        }
        if(i==0){min=sum;max=sum;}
        if(min>=sum){min=sum;} if(max<=sum){max=sum;}
    }
    printf("%lld %lld",min,max);
    return 0;
}
