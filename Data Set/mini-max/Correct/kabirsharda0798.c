#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    scanf("%lld %lld %lld %lld %lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    int k=0;
    int j=0;
    for(int i=0;i<5;i++){
        if(a[i]<a[k]){
            k=i;
        }
        if(a[i]>a[j]){
            j=i;
        }
    }
    long long int sum1=0,sum2=0;
    for(int i=0;i<5;i++){
        if(i!=k){
            sum1+=a[i];
        }
        if(i!=j){
            sum2+=a[i];
        }
    }
    printf("%lld ",sum2);
    printf("%lld\n",sum1);
    return 0;
}
