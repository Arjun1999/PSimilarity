#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    /*long int b; 
    long int c; 
    long int d;
    long int e;*/
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long long int min=0,max,i,sum=0;
    for(i=0;i<5;i++)
        sum=sum+a[i];
    for(i=0;i<4;i++)
        min=min+a[i];
    max=min;
    for(i=0;i<5;i++)
        {if(min>sum-a[i]) min=sum-a[i];
         if(max<sum-a[i]) max=sum-a[i];
        
        }
    printf("%lld %lld",min,max);
    return 0;
}
