#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i,j;
    long long int a[5];
    long long int temp;
    long long int min;
    long long int max;
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<5;i++){
        for(j=0;j<5-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    min=a[0]+a[1]+a[2]+a[3];
    max=a[4]+a[1]+a[2]+a[3];
    printf("%lld %lld",min,max);
    return 0;
}
