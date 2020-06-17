#include <assert.h>
#include <limits.h>
#include <math.h>

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int i,a[5],small,large;
    long int sum=0;
    small=a[0];
    large=a[0];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(small>a[i])
            small=a[i];
        if(large<a[i])
            large=a[i];
        sum+=a[i];
            
    }
    printf("%ld %ld",sum-large,sum-small);
    return 0;
}


 