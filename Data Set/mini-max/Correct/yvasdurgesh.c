#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],i,b,c=0,d=0,k=6000000000;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
        {
        c=c+a[i];
    }
    for(i=0;i<5;i++)
        {
        
        c=c-a[i];
        if(d<c)
            d=c;
    
    c= a[0]+a[1]+a[2]+a[3]+a[4];
    }
    for(i=0;i<5;i++)
        {
        c=c-a[i];
        if(c<k)
            k=c;
        c=a[0]+a[1]+a[2]+a[3]+a[4];
    }
       
    
    printf("%ld %ld",k,d);
    
    return 0;
}
