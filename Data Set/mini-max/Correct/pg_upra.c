#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int main() {
    long long int *arr = malloc(sizeof(long long int) * 5);
    long long int *finalsum = malloc(sizeof(long long int) * 5);
    int skip = 0;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%lld",&arr[arr_i]);
    }

    for(int i =0 ;i <5 ; i++){
       long long int sum = 0;
       for(int j = 0; j<5;j++){
           if(j==skip){
               ;
           } else {
              sum = sum + arr[j];
           }
       }

       finalsum[i] = sum;
       skip++;
    }

 
    long long int maxnumber = -9223372036854775000; 
    for(int k =0 ; k<5;k++){
        if(maxnumber < finalsum[k]){
            maxnumber = finalsum[k];
        } else {
            ;
        }
    }
   
    long long int minnumber = 9223372036854775000;
    for(int b =0; b<5;b++){
        if(minnumber > finalsum[b]){
            minnumber = finalsum[b];
        } else {
            ;
        }
    }

    printf("%lld %lld", minnumber, maxnumber);

    return 0;
}
