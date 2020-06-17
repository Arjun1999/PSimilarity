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
    int i=0;
    unsigned long long int larger=0, smaller=0,sum=0;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    unsigned long long int A[5]={a,b,c,d,e};
    larger=smaller=A[i];
    for(i=0;i<5;i++){
        sum=sum+A[i];
        
        if(A[i]>=larger){
            larger=A[i];
        }
        if(A[i]<=smaller){
            smaller=A[i];
        }
    }   
    printf("%lld %lld\n",sum-larger,sum-smaller);
    return 0;
}
