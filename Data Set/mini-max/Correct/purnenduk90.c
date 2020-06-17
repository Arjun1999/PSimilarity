#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define MAX(a,b) ((a) > (b) ? a : b)
#define MIN(a,b) ((a) < (b) ? a : b)
int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int mi,ma;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    mi= (a+b+c+d+e)-MAX(MAX(MAX(MAX(a,b),c),d),e);
    ma= (a+b+c+d+e)-MIN(MIN(MIN(MIN(a,b),c),d),e);
    printf("%ld %ld" , mi, ma);
    return 0;
}
