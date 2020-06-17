#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    unsigned long long int a,b,c,d,e,i,max=0,min=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    unsigned long long int array[5]={a,b,c,d,e};
    max=array[0];min=array[0];
    for(i=0;i<5;i++){
        if(array[i]>max){max=array[i];}
         if(array[i]<min){min=array[i];}
    }
    printf("%lld %lld",a+b+c+d+e-max,a+b+c+d+e-min);
    return 0;
}
