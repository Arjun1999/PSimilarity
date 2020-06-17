#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long long min = 0, max = 0, total = 0;
    long long a[5];
    for (int i=0; i<5; ++i) {
        scanf("%lld", &a[i]);
        total += a[i];
    }
    
    min = max = total - a[0];
    
    for (int i=1; i<5; ++i) {
        if (total - a[i] < min)
            min = total-a[i];
        if (total - a[i] > max)
            max = total - a[i];
    }
        
    printf("%lld %lld", min, max);
        
    return 0;
}
