#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    long long min,max;
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
    for(int i=0;i<5;i++)
    {
        for(int j = 0 ;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]^=a[j+1]^=a[j]^=a[j+1];
            }
        }
    }
     min = a[0]+a[1]+a[2]+a[3];
     max = a[4]+a[1]+a[2]+a[3];
    
    printf("%lld %lld",min,max);
    
    return 0;
}
