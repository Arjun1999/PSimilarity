#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int a[5];
    long long unsigned int min = 0, max=0, tmp = 0;
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long long unsigned int total = a[0]+a[1]+a[2]+a[3]+a[4];
    min = total;
    for(int i=0;i<5;i++)
        {
        
        tmp = total - a[i];
        if(tmp >= max)
            max = tmp;
        if( tmp <= min)
            min = tmp;
        
    }
    printf("%llu %llu", min,max);
    return 0;
}
