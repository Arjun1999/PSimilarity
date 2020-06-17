#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define size 5

int main(){
    long int num[size];
    int i;
    long int sum,min,max;
    for(i=0;i<size;i++){
        scanf("%ld",&num[i]);
        sum=sum+num[i];
    }
    max=sum-num[0];
    min=max;
    for(i=1;i<size;i++){
        if(max<=sum-num[i]){
            max=sum-num[i];
        }
        if(min>sum-num[i]){
            min=sum-num[i];
        }
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
