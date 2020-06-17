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
    long int sum1=a+b+c+d+e;
    long int a1[5]={sum1-a,sum1-b,sum1-c,sum1-d,sum1-e};
    
           long int large=a1[0],small=a1[0];
    for(int i=0;i<5;i++){
            if(large>=a1[i]) large=a1[i];
            if(small<=a1[i]) small=a1[i];
        
        
        }
    
    printf("%lld %lld",large,small);
    
    return 0;
}
