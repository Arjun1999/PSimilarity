#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    /*long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);*/
    long int sum=0,min,max;
    long int vals[5];
    for(int i=0; i<5;i++){
        scanf("%ld",&vals[i]);
        if(i==0){min=vals[i];max=vals[i];}
        if(min>vals[i]){min=vals[i];}
        if(max<vals[i]){max=vals[i];}
        sum+=vals[i];
    }
    printf("%ld %ld",sum-max,sum-min);
    
    
    return 0;
}
