#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void bubble(long long a[])
 {
    int round,n=5,i;
    for(round=1;round<n;round++)
    {
       for(i=0;i<n-round;i++)
       {if(a[i]>a[i+1])
            a[i]=a[i]+a[i+1]-(a[i+1]=a[i]);   
       }
    }
    
}

int main(){
    long long a[5],max=0,min=0;
   for(int i=0;i<5;i++)
       scanf("%lld",&a[i]);
    bubble(a);
    for(int i=0;i<4;i++)
     {
        min=min+a[i];
        max=max+a[i+1];
    }
    printf("%lld %lld",min,max);
   // printf("")
   
    return 0;
}
