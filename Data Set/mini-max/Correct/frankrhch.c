#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long a[5],r;
    long long min,max; 
    for(int i=0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<5;i++){
        for(int j=1;j<5-i;j++){
                if(a[j]<a[j-1]){
                    r=a[j-1];
                    a[j-1]=a[j];
                    a[j]=r;
                }
        }
    }
    min=0;
    max=0;
    for(int i=0;i<4;i++){
       min+=a[i];
       max+=a[4-i];
    }
    printf("%lld %lld", min, max);
    return 0;
}
