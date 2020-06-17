#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   unsigned long long int a; 
   unsigned long long int b; 
   unsigned long long int c; 
   unsigned long long int d;
   unsigned long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
   unsigned long long int sumMAX ;
   unsigned long long int sumMIN;
    
    unsigned long long int v[6],aux;
    int i,j;
    
    v[0] = a;
    v[1] = b;
    v[2] = c;
    v[3] = d;
    v[4] = e;
    
    for(i = 0 ;i < 4 ;i++)
        for(j = i+1 ;j < 5;j++)
            if(v[i] > v[j])
             {
                     aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
             }

    sumMAX = v[1] + v[2] + v[3] + v[4];
    sumMIN = v[0] + v[1] + v[2] + v[3];
    
    printf("%lld %lld",sumMIN , sumMAX);
    
    return 0;
}
