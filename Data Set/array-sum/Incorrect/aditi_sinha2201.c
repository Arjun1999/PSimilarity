#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,arr_i,s=0, arr[n];
    scanf("%d",&n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
        s=s+arr[arr_i];
       
    }
    printf(" %d",s);
    return 0;
}
