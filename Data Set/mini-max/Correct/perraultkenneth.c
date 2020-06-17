#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc(const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int min = 0, max = 0, i = 0;
    long long int *list = (long long int *)malloc(sizeof(long long int)*5);
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    list[0] = a;
    list[1] = b;
    list[2] = c;
    list[3] = d;
    list[4] = e;
    
    qsort(list, 5, sizeof(long long int), cmpfunc);
    for (i = 0; i < 5; i++) {
        if (i < 4)
            min += list[i];
        if (i > 0)
            max += list[i];
    }
    
    printf("%lld %lld", min, max);
    
    return 0;
}
