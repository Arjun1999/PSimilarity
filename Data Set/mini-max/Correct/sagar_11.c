#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5], s=0;long long int min,max;
    for(int j=0;j<5;j++)
    {scanf("%lld",&a[j]);
    s=s+a[j];
}
    max=a[0];
    min=a[0];
    for(int j=1;j<5;j++)
       {if(a[j]>max)
        max=a[j];
        if(a[j]<min)
        min=a[j];
}
    printf("%lld %lld",(s-max),(s-min));
    return 0;
}
