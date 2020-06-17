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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
   long long int ar[5];
    ar[0] = a+b+c+d;
    ar[1] = a+b+c+e;
    ar[2] = a+b+d+e;
    ar[3] = a+c+d+e;
    ar[4] = b+c+d+e;
   long long alfa = ar[0], beta= ar[0]; 
    for(int i = 0;i<5;i++){
        if(alfa > ar[i]){
            alfa =alfa;
           // beta = ar[i];
        }
        else{
            alfa = ar[i];
            //beta = beta;
        }
        if(beta >ar[i]){
            beta = ar[i];
        }
        else{
            beta = beta;
        }
    }
        printf("%lld %lld",beta,alfa);

    return 0;
}
