#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef long long big;

int main(){
    big a[5];
    
    for (int i = 0; i < 5; i++)
        scanf("%lld", a+i);
    
    for (int i = 0; i < 4; i++){
        int l = i;
        for (int j = i+1; j < 5; j++){
            if (a[j] < a[l])
                l = j;
        }
        big temp = a[i];
        a[i] = a[l];
        a[l] = temp;
    }
    
    big min = 0, max = 0;
    
    for (int i = 0; i < 4; i++)
        min += a[i];
    
    for (int i = 1; i < 5; i++)
        max += a[i];
    
    printf("%lld %lld\n", min, max);
    return 0;
}
