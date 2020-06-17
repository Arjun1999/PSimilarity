#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    long long int max,min,maxx,i,j;
    long  long int a[5];
    scanf("%lld%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(i=0;i<4;i++){
        max=a[i];
        for(j=i+1;j<5;j++){
            if(a[j]>max){
                max=a[j];
                a[j]=a[i];
                a[i]=max;
            }
        }
    }
    maxx=a[1]+a[2]+a[3]+a[4];
    min=a[0]+a[1]+a[2]+a[3];
    printf("%lld %lld",maxx,min);

return 0;
}