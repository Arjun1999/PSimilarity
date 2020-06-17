#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define max(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a > _b ? _a : _b; })

#define min(a,b) \
   ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
     _a < _b ? _a : _b; })

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int max1, min1;

    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    max1 = max(a+b+c+d,a+b+c+e);
    max1 = max (max1,a+b+d+e);
    max1 = max (max1,a+c+d+e);
    max1 = max (max1,b+c+d+e);
    min1 = min(a+b+c+d,a+b+c+e);
    min1 = min (min1,a+b+d+e);
    min1 = min (min1,a+c+d+e);
    min1 = min (min1,b+c+d+e);
printf("%ld %ld\n",min1,max1);
    return 0;
}
