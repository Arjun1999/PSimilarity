#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int r[5];
    long int max,min;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    r[0]=a+b+c+d;
    r[1]=b+c+d+e;
    r[2]=a+c+d+e;
    r[3]=a+b+d+e;
    r[4]=a+b+c+e;
    max=r[0];
        for(int i=1;i<5;i++){
            if(r[i]>max){
                max=r[i];
            }
        }
    min = r[0];
    for(int i=1;i<5;i++){
            if(r[i]<min){
                min=r[i];
            }
        }
    printf("%lld %lld",min,max);
    return 0;
}
