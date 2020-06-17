#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int t,j,i;long int smax=0,smin=0;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < 5; arr_i++){
        for(j = arr_i+1; j < 5; j++){
            if(arr[arr_i]>=arr[j]){
                t=arr[arr_i];
                arr[arr_i]=arr[j];
                arr[j]=t;
            }
        }
    }
        for(i=0;i<4;i++){
           smin=smin+arr[i]; 
        }
        for(i=0;i<5;i++){
           smax=smax+arr[5-i]; 
        }
    printf("%ld %ld",smin,smax);
    return 0;
}
