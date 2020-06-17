#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    long unsigned int max=0,min=18446744073709551615,tmp=0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(j!=i)
                tmp = tmp+arr[j];   
        }
        if(tmp >max)
            max=tmp;
        if(tmp<min)
            min=tmp;
        tmp=0;   
    }
    printf("%ld %ld",min,max);
    return 0;
}
