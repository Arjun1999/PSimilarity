#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#include <stdint.h>

int main(){
    long long int a[5]; 
    for(int i=0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    long long int t,temp;
    for(int i=0;i<4;i++){
        t=a[i];
        int k=i;
        for(int j=i+1;j<5;j++){
            if(t>a[j]){
                t=a[j];
                k=j;
            }
        }
        temp=a[i];
        a[i]=t;
        a[k]=temp;
    }
    long long int min=0,max=0;
    min=a[0]+a[1]+a[2]+a[3];
    max=a[1]+a[2]+a[3]+a[4];
    printf("%lld ",min);
    printf("%lld",max);
    return 0;
}
