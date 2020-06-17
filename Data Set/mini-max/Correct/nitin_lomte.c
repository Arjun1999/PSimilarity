#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    unsigned long long int  ans,lsum,ssum;
    ans=b+c+d+e;
    lsum = ans;
    ssum = ans;
    ans=a+c+d+e;
    if (lsum < ans)
        lsum=ans;
    if (ssum > ans)
        ssum=ans;
    ans=a+b+d+e;
    if (lsum < ans)
        lsum=ans;
    if (ssum > ans)
        ssum=ans;
    ans=a+b+c+e;
    if (lsum < ans)
        lsum=ans;
    if (ssum > ans)
        ssum=ans;
    ans=a+b+c+d;
    if (lsum < ans)
        lsum=ans;
    if (ssum > ans)
        ssum=ans;
   // printf ("%llu %llu",ssum,lsum);
    
    printf ("%llu %llu",ssum,lsum);
    
    
    
    return 0;
}
