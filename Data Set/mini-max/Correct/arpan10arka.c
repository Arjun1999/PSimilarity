#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
     long long int a[5];
     long long int i,j,max,min;
     long long int b[5]={0,0,0,0,0};
    for(i=0;i<5;i++){
       scanf("%lld",&a[i]);
    }
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(j!=i){b[i]+=a[j];}
        }

    }
    max=b[0];
    min=b[0];

    for(i=0;i<5;i++){
        if(b[i]>max){
            max=b[i];
        }
        if(b[i]<min){min=b[i];}
    }
    printf("%lld %lld",min,max);


    return 0;
}
