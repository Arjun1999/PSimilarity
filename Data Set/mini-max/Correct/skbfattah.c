#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int f[6] = {a, b, c ,d, e};
    long long int g[6] = {0, 0, 0, 0, 0};
    int i,j;
    
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            if(i != j)
            {
                g[i] += f[j];
            }   
        }
    }
    qsort(g, 5, sizeof(long long int), cmpfunc);

    printf("%lld %lld", g[0], g[4]);
    
    return 0;
}
