#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void bs(long long int a[],int n){
    int round,i;
    long long int temp;
    for(round=1;round<n;round++)
        for(i=0;i<=n-1-round;i++)
            if(a[i]>a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                
            }
}
int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e,t[5],sum,min,max;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum = a+b+c+d+e;
    t[0]=a;t[1]=b;t[2]=c;t[3]=d;t[4]=e;
    bs(t,5);
    min = t[0];max=t[4];
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
