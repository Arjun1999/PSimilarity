#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,m; 
    scanf("%d",&n);
    int arr[n];
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
       
    }
    for(int arr_i = 0; arr_i < n; arr_i++){
       arr[n]=arr[n]+arr[n-1];
    }
    printf("%d",&arr[n]);
    return 0;
}
