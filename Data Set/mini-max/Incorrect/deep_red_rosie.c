#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(){
    long long int a[5]; 
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    qsort(a,5,sizeof(long long int),cmpfnc);
    
    printf("%lld %lld\n", a[0]+a[1]+a[2]+a[3], a[1]+a[2]+a[3]+a[4]);
    
    return 0;
}
