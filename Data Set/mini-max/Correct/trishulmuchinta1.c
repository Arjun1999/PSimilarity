#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int i,k,h;
long long b[5],c[5],l,m,z,temp,t;

int main(){
    long long large,small;
  long long a[5];
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
   t=a[0]+a[1]+a[2]+a[3]+a[4];
    m=a[0];
    for(i=0;i<5;i++)
        {
        if(a[i]>m)
            m=a[i];
            
    }
    l=a[0];
    for(i=0;i<5;i++)
        {
        if(a[i]<l)
            l=a[i];
            
    }

    
    printf("%lld %lld",t-m,t-l);
    
        return 0;

}