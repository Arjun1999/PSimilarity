#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef long long int ll;
int main(){
    ll i,max,min;
    ll a[5];ll d=0;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
        d+=a[i];}
    max=a[0];
    min=a[0];
    for(i=1;i<5;i++){
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    ll n1=d-max;
    ll n2=d-min;
    printf("%lld %lld",n1,n2);
    return 0;
}
