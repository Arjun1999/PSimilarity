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
    long int sum[5]={b+c+d+e,a+c+d+e,a+b+d+e,a+b+c+e,a+b+c+d};
    long int temp;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
        if(sum[i]>sum[j]){
            temp=sum[i];
            sum[i]=sum[j];
            sum[j]=temp;
        }
        }
    }
    
        printf("%lld %lld",sum[0],sum[4]);
    
    return 0;
}
