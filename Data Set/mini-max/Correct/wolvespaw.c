#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    #define MAX(x,y) ((x>y)?x:y)
    #define MIN(x,y) ((x<y)?x:y)
    long long int a,b,c,d,e; 
    long long int max=0,min=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    a = a+b;
    max = MAX(a+c+d,a+c+e);
    min = MIN(a+c+d,a+c+e);
    max = MAX(max,a+d+e);
    min = MIN(min,a+d+e);
    max = MAX(max,b+c+d+e);
    min = MIN(min,b+c+d+e);
    max = MAX(max,a-b+c+d+e);
    min = MIN(min,a-b+c+d+e);
    printf("%lld %lld",min,max);
    return 0;
}
