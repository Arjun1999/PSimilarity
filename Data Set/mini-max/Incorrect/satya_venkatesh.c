#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5); long int sum=0; long int m[5];
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);  sum += arr[arr_i];
    }
    int j,k,i ; int max=m[0] ; int min=m[0] ;
    for(j=0;j<5;j++){
        m[j] = sum-arr[j];
    }
    for(k=0;k<5;k++){
        if(min>m[k]) min = m[k];
    }
    for(i=0;i<5;i++){
        if(max<m[i]) max = m[i];
    }
    printf("%d %d",min,max);
    return 0;
}
