#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long minsum = 1LL << 32;
    long long maxsum = 0;
    
    long long n[5];
    
    scanf("%lld %lld %lld %lld %lld",&n[0],&n[1],&n[2],&n[3],&n[4]);

    long long suma = 0;
    
    for(int i=0; i<5; i++)
        suma += n[i];

    for(int i=0; i<5; i++)
    {
        long long s = suma - n[i];
        
        if(s > maxsum)
            maxsum = s;
        
        if(s < minsum)
            minsum = s;
    }

    printf("%lld %lld",minsum,maxsum);
    
    return 0;
}
