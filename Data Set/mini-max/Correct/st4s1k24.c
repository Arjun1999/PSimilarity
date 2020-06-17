#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long        x[6];
    long long   min, max;
    
    scanf("%ld %ld %ld %ld %ld", &x[0], &x[1], &x[2], &x[3], &x[4]);
    for (int i = 0; i < 5; ++i)
    {
        for (int j = i; j < 5; ++j)
        {
            if (x[j] < x[i])
            {
                x[5] = x[i];
                x[i] = x[j];
                x[j] = x[5];
            }
        }
    }
    
    min = 0;
    max = 0;
    for (int i = 0; i < 5; ++i)
    {
        if (i < 4)
            min += x[i];
        if (i)
            max += x[i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
