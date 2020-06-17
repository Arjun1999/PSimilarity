#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int sum[5],big,small;
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum[0]=b+c+d+e;
    sum[1]=a+c+d+e;
    sum[2]=a+b+d+e;
    sum[3]=a+b+c+e;
    sum[4]=a+b+c+d;
    big=sum[0];
   for( int i=0 ; i<=4 ;i++)
       {
       if(big<sum[i]){
           big=sum[i];
       }
   }
    small=sum[0];
    for(int j=0; j<5; j++){
        if(small>sum[j]){
            small=sum[j];
            
        }
    }
    printf("%lld %lld",small,big);
    return 0;
}
