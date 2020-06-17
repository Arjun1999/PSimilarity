#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5], min, max, g=0;
    int i, mni=0, mxi=1;
    for (i = 0; i < 5; i++)
    {
        scanf("%lld", &a[i]);
    }
    min = a[1];
    max = a[0];
    for (i = 0; i < 5; i++)
    {
        if (a[i]<min)
        {
            min = a[i];
            mni = i;
        }
        if (a[i]>max)
        {
            max = a[i];
            mxi = i;
        }
    }
    for (i = 0; i < 5; i++)
    {
        if (i != mni && i != mxi)
        {
            g = g + a[i];
        }
    }
    printf("%lld %lld\n", g+min, g+max);
    return 0;
}