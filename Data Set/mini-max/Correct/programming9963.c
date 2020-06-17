#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,b,c,d,e,a1,b1,c1,d1,e1;
    long int min,max;
    scanf("%ld %ld %ld %ld %ld ",&a,&b,&c,&d,&e);
    a1=b+c+d+e;
    b1=a+c+d+e;
    c1=a+b+d+e;
    d1=a+c+b+e;
    e1=a+b+c+d;
    if(a1>b1)
        {
        max=a1;
        min=b1;
    }
    else {
        max=b1;
        min=a1;
    }
    if(max<c1)
        max=c1;
    if(min>c1)
        min=c1;
     if(max<d1)
        max=d1;
    if(min>d1)
        min=d1;
     if(max<e1)
        max=e1;
    if(min>e1)
        min=e1;
    printf("%ld %ld",min,max);
    return 0;
}
