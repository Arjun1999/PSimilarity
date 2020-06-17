#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long long int large(long long int s[5]);
long long int small(long long int s[5]);
long long int large(long long int s[5])
    {
    int i=0;
   long long int large=s[0];
    while(i<5)
        {
    if(large<s[i])
        large=s[i];
        i++;
    }
   return large;   
}
long long int small(long long int s[5])
    {
    int i=0;
    long long int small=s[0];
   while(i<5)
     {
        if(small>s[i])
            small=s[i];
        i++;
    }
    return small;
}

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int s[5];
    long long int l;
    long long int m;
    int i=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    s[0]=b+c+d+e;
    s[1]=a+c+d+e;
    s[2]=a+b+d+e;
    s[3]=a+b+c+e;
    s[4]=a+b+c+d;
    l=large(s);
        m=small(s);
    printf("%lld %lld",m,l);
    return 0;
}
