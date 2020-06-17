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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int array[5]={a,b,c,d,e};
    long int sum[5]={0,0,0,0,0};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i!=j){
                sum[i]=sum[i]+array[j];
            }
        }
    }
    long int min=sum[0];
    long int max=sum[0];
    for(i=0;i<5;i++){
        if(max<sum[i]){
            max=sum[i];
        }
        if(min>sum[i]){
            min=sum[i];        }
        }
    printf("%ld %ld",min,max);
    return 0;
}
