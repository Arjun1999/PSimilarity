#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,x=0;
    scanf("%d\n",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d\n",&arr[arr_i]);
       x=x+arr[arr_i];
    }
    printf("output is: %d\n",x);
    return 0;
}
