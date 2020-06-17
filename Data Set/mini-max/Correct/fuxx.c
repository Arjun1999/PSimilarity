#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int foo(const void *p1, const void *p2) {
    long long int v1 = *((long long int*)p1);
    long long int v2 = *((long long int*)p2);
    
    if(v1>v2) {
        return 1;
    } else if(v1<v2) {
        return -1;
    }
    return 0;
}
int main(){
    long long int a[5]; 
    int i;
    long long int min=0, max=0;
    
    scanf("%lld %lld %lld %lld %lld",a+0,a+1,a+2,a+3,a+4);
    qsort(a, 5, sizeof(long long int), foo);

    for(i=0;i<5;++i) {
        if(i!=0) max += a[i];
        if(i!=4) min += a[i];
    }
    printf("%lld %lld\n", min, max);
    return 0;
}
