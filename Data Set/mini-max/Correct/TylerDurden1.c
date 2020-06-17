#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   unsigned long long swap;
   unsigned long long   a; 
   unsigned long long   b; 
   unsigned long long   c; 
   unsigned long long   d;
   unsigned long long   e;
   unsigned long long   x[5];
    scanf("%llu %llu %llu %llu %llu",&a,&b,&c,&d,&e);
    x[0] = a;
    x[1] = b;
    x[2] = c;
    x[3] = d;
    x[4] = e;
    for(int i = 0; i < 5;i++)
    {
        for(int j = 0; j < 4;j++)
        {
            if(x[j] > x[j+1])
            {
                swap = x[j] ;
                x[j] = x[j+1];
                x[j+1] = swap;
            }
        }
    }
   
   unsigned long long  max = 0;
   unsigned long long  min = 0;
    for(int h = 0; h < 4;h++)
        min += x[h];
   
    for(int y = 1; y < 5;y++) 
        max += x[y];
     
    printf("%llu %llu\n", min, max) ;
    
    return 0;
}
