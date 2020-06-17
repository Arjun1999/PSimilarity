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
   long long int e,sum=0,min,max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    min=(a>b?b:a)<c?(a >b?b:a):c;
    max=(a<b?b:a)>c?(a <b?b:a):c;
    min=(min>d?d:min)<e?(min>d?d:min):e;
    max=(max<d?d:max)>e?(max<d?d:max):e;
    printf("%lld %lld",sum-max,sum-min);
    
        
    
    return 0;
}
