#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int min,max;
    long long int ar[5];
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    ar[0]=b+c+d+e;
    ar[1]=a+c+d+e;
    ar[2]=a+b+d+e;
    ar[3]=a+b+c+d;
    ar[4]=a+b+c+e;
    min=ar[0];
    max=ar[0];
    int i;
    for(i=0;i<5;i++){
        if(ar[i]>max){
            max=ar[i];
        } 
        else if(ar[i]<min){
            min=ar[i];
        }
    }
    printf("%lli %lli",min,max);  
    return 0;
}
