#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5];
    int temp;
    long long int minsum=0,maxsum=0;
    scanf("%lld%lld%lld%lld%lld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    
   for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(a[i]>=a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    for(int k=0;k<4;k++){
        minsum=minsum+a[k];
        maxsum=maxsum+a[k+1];
    }
    printf("%lld %lld",minsum,maxsum);
    return 0;
}
