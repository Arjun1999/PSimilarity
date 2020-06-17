#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long long _min(long long int a,long long int b){
    return (a<b)?a:b;
}

long long _max(long long int a,long long int b){
    return (a>b)?a:b;
}

int main(){
    long long int a;
    long long int b;
    long long int c;
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long long int max=INT_MIN,min=INT_MAX;
    /*max=(a>b)?((a>c)?((a>d)?((a>e)?a:e):(d>e?d:e)):(c>d)?((c>e)?c:e):((c>d)?d:e)):((b>c)?((b>d)?((b>e)?b:e):(d>e?d:e)):(c>d)?((c>e)?c:e):((c>d)?d:e));
    min=(a < b)?((a<c)?((a<d)?((a<e)?a:e):(d<e?d:e)):(c<d)?((c<e)?c:e):((c<d)?d:e)):((b<c)?((b<d)?((b<e)?b:e):(d<e?d:e)):(c<d)?((c<e)?c:e):((c<d)?d:e));*/
    max=_max(a,_max(b,_max(c,_max(d,e))));
    min=_min(a,_min(b,_min(c,_min(d,e))));
   // printf("%lld %lld\n",a+b+c+d+e,max);
    long long max_sum=a+b+c+d+e-min;
    long long min_sum=a+b+c+d+e-max;
    printf("%lld %lld",min_sum,max_sum);
    return 0;
}
