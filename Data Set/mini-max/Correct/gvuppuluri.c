#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int ai[5];
    ai[0] = a; ai[1] = b; ai[2] = c; ai[3] = d;ai[4] = e;
    long int min, max;
    
    for (int i = 0; i < 5; i++)
    {
        long int sum = 0;
        for (int j = 0; j < 5; j++)
        {
            if (i == j) continue;
            sum += ai[j];
        }
        if (i == 0)
        {
            min = max = sum;
        }
        if (sum < min) min = sum;
        if (sum > max) max = sum;
    }
    printf("%ld %ld\n", min, max);
    return 1;


    return 0;
}
