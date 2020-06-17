#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int sum=0;
    long int aa[5];
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    aa[0]=a;
    aa[1]=b;
    aa[2]=c;
    aa[3]=d;
    aa[4]=e;
    int  m=aa[0];
    int n=m;
    for(int i=1;i<5;i++)
        {
        if(aa[i]>=m)
        m=aa[i];       
         
        if(aa[i]<=n)
            n=aa[i];
    }
    for(int i=0;i<5;i++)
                sum+=aa[i];
    
    printf("%ld %ld",(sum-m),(sum-n));
        
 
    return 0;
}
