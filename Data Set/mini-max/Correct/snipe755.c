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
    long int* p;
    p = malloc(5*sizeof(long int));
    *p = a;
    *(p+1) =b;
    *(p+2)=c;
    *(p+3)=d;
    *(p+4) = e;
    int neurejeno = 1;
    long int temp;
    while(neurejeno) {
        neurejeno = 0;
        for(int i = 0; i<4;i++) {
            *(p+i+1) < *(p+i) ? temp = *(p+i+1), *(p+i+1) = *(p+i), *(p+i) = temp, neurejeno = 1 : 0 ;         
        }
    }
    long int min= 0, max = 0;
    for(int i = 0; i<4; i++ ) {
        min += *(p+i);
        }
    for(int i = 1; i<5; i++ ) {
        max += *(p+i);
        
        }
    printf("%ld %ld\n ", min, max);
    return 0;
}
