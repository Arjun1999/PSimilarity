#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],b[5];
    long int sum=0;
    long int s,t;
    int i=0;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);}
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    for(i=0;i<5;i++){
        b[i]=sum-a[i];
    }
    t=b[0];
    s=b[0];
    for(i=0;i<5;i++){
        if(b[i]>t){
            t=b[i];
        }
    }
    for(i=0;i<5;i++){
        if(b[i]<s){
            s=b[i];
        }
    }
    printf("%lld %lld\n",s,t);
    return 0;
}
