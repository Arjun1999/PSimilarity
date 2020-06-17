#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define min(a,b) (a<b)?a:b
#define max(a,b) (a>b)?a:b
int main(){
    long long int a[6] = {0},mi=LONG_MAX,ma=0,sm=0;
    int i=0,j=0;
    for(i=0;i<5;i++)
    scanf("%lld",&a[i]);
   
    for(i=0;i<5;i++)
        {
        sm=0;
        for(j=0;j<5;j++)
            if(j != i)
            sm += a[j];
        mi = min(mi,sm);
        ma = max(ma,sm);
    }
    printf("%lld %lld\n",mi,ma);
    return 0;
}
