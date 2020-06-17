#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];
    int mindex =0;
    int maxdex =0;
    for(int i=0; i<5; i++) {
        scanf("%lld", &a[i]);
        if(a[i] > a[maxdex]) maxdex=i;
        if(a[i]  < a[mindex]) mindex=i;
    }
    int min = 0;
    int max = 0;
    for(int i=0; i<5; i++) {
        if(i != mindex) max += a[i];
        if(i != maxdex) min += a[i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
