#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int main(){
    long long int array [5];
    long long int totals [5];
    long long int largest = 0;
    long long int smallest = 0;
    
    for(int a = 0; a < 5; a++){
        scanf("%lld", &array[a]);
        //printf("%lld ", array[a]);
        totals[a] = 0;
    }
    //printf("\n");
    
    for(int a = 0; a < 5; a++){
        //printf("A = %d\n", a);
        for(int b = 0; b < 5; b++){
            //printf("B = %d\n", b);
            if(a != b){
                //printf("totals[%d] = %lld\n", a, totals[a]);
                //printf("array[%d] = %lld\n", b, array[b]);
                totals[a] += array[b];
                //printf("total += array = %lld\n\n", totals[a]);
            }else{
                //printf("A = B!\n\n");
            }
        }
    }
    smallest = totals[0];
    
    for(int a = 0; a < 5; a++){
        if(totals[a] > largest){
            largest = totals[a];
        }
        if(totals[a] < smallest){
            smallest = totals[a];
        }
        
    }
    
    printf("%lld %lld", smallest, largest);

    return 0;
}
