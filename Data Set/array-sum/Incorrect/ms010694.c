#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include N 6

int main(){
    int n,arr_i,sum=0; 
    scanf("%d",&n);
    int arr[N];
    for(int arr_i = 0; arr_i <n; arr_i++){
       scanf("%d",&arr[arr_i]);
        sum+=arr[arr_i];
    }
    printf("\n Sum=%d",sum);
    return 0;
}
