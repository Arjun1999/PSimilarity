#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int aa, bb, cc, dd, ee = 0;
    aa = b + c + d + e;
    bb = a + c + d + e;
    cc = a + b + d + e;
    dd = a + b + c + e;
    ee = a + b + c + d;
    long int largest, smallest;
    for (int i = 0; i < 5; i++){
        if (i == 0){
            largest = aa;
            smallest = aa;
        }
        if (i == 1){
            if (largest < bb)
                largest = bb;
            if (smallest > bb)
                smallest = bb;
        }
        if (i == 2){
            if (largest < cc)
                largest =cc;
            if (smallest > cc)
                smallest = cc;
        }
        if (i == 3){
            if (largest < dd)
                largest =dd;
            if (smallest > dd)
                smallest =dd;
        }
        if (i == 4){
            if (largest < ee)
                largest = ee;
            if (smallest >ee)
                smallest = ee;
        }
        
        
       
    }
    printf ("%ld %ld",smallest, largest );
    return 0;
}
