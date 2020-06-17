#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    unsigned long smallest=-1 ;
    long largest= 0  ;
    long sum = 0 ;
    for(int index = 0 ; index<5 ; index++){
        sum = 0;
        for(int j =0 ; j <5; j++){
            if(j== index){
                
            }
            else{
            sum+= arr[j];
                }
        }
        if(sum< smallest){
            smallest = sum;
        }
        
        if(sum>largest){
            largest = sum;
        }
    }
    printf("%li %li",smallest,largest);
    
    return 0;
}
