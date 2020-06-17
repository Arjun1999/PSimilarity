#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int *arr = malloc(sizeof(int) * 5),temp;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
         for(int i=0; i < 5; i++){
                        for(int j=0; j < (4-i); j++){
                               
                                if(arr[j] > arr[j+1]){
                                        temp = arr[j+1];
                                        arr[j+1] = arr[j];
                                        arr[j] = temp;
                                }
                               
                        }
                }
        int long sum1=0,sum2=0;
        for(int i=0;i<4;i++){
            sum1+=(long)arr[i];
            sum2+=(long)arr[i+1];
        }
        printf("%ld %ld",sum1,sum2);
    return 0;
}
