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
    
    long int max_abcd = ((a > b ? a : b) > ( c > d ? c : d) ? (a > b ? a : b) : ( c > d ? c : d)) ;
    long int max_abcde  =   max_abcd > e ? max_abcd : e;
    
    long int min_abcd = ((a < b ? a : b) < ( c < d ? c : d) ? (a < b ? a : b) : ( c < d ? c : d)) ;
    long int min_abcde  =   min_abcd < e ? min_abcd : e;
    long int sum = a+b+c+d+e;
    
    printf("%ld %ld\n", ( sum - max_abcde), ( sum - min_abcde));
    return 0;
}
