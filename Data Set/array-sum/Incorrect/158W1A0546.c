#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,sum;
    scanf("%d",&n);
    sum=0;
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    sum=sum+arr[i];
    printf("\n array sum is%d",sum);
    return 0;
}
