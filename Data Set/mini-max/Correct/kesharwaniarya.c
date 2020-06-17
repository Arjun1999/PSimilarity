#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int i;
    long s=0, min, max;
    long a[100];
    for(i = 0; i < 5; i++){
       scanf("%ld",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i = 0; i < 5; i++)
        {
        s=s+a[i];
        if(max>a[i])
            max=a[i];
        if(min<a[i])
            min=a[i];
    }
    printf("%ld %ld",s-min, s-max );
    return 0;
}
