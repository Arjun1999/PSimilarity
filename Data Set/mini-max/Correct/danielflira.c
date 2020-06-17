#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int tam = 5;
    long long int n[tam]; 
    long long int r[tam];
    long long int min=0, max=0;
    
    // clear arrays
    memset(n, 0, sizeof(long long int)*tam);
    memset(r, 0, sizeof(long long int)*tam);
    
    scanf("%lld %lld %lld %lld %lld", &n[0], &n[1], &n[2], &n[3], &n[4]);
    
    for (int i = 0; i < tam; i++)
    {
        // sum all except one
        for (int j=0; j < tam; j++)
        {
            if (i != j)
            {
                r[i] += n[j];
            }
        }
        
        // start min and max with valid num
        if (!i)
        {
            max = r[i];
            min = r[i];
        }
        
        // check max
        else if (r[i] > max)
        {
            max = r[i];
        }
        
        // check min
        else if (r[i] < min)
        {
            min = r[i];
        }
    }
    
    printf("%lld %lld\n", min, max);
        
    return 0;
}
