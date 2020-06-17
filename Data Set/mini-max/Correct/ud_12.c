#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5]; 
    
    scanf("%ld %ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3],&a[4]);
    long int t=a[0];
    for(int i=1;i<=4;i++){
        if(a[i]>t)
            t=a[i];
    }
    long int s=a[0];
    for(int j=1;j<=4;j++){
        if(a[j]<s)
            s=a[j];
    }
    long int e=a[0]+a[1]+a[2]+a[3]+a[4];
    printf("%ld %ld",e-t,e-s);
    return 0;
}
