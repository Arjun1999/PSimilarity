#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int add(int arr[],int j){
    int i;
    unsigned int sum=0;
    for(i=1;i<=5;i++){
        if(i!=j)
            sum+=arr[i];
    }
    return sum;
}
int main() {
    unsigned int large=0,small;
    unsigned int s=0,sum1;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 1; arr_i <=5; arr_i++){
       scanf("%d",&arr[arr_i]);
       s+=arr[arr_i];
    }
    small=s;
    for(int i=1;i<=5;i++){
        sum1=add(arr,i);
        if(sum1>large)
            large=sum1;
        if(sum1<small)
            small=sum1;
    }
    printf("%u",small);
    printf("\t");
    printf("%u",large);
    return 0;
}
