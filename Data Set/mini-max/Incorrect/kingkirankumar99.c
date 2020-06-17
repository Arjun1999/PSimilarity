#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int sum,a,b,c,d,e,i,j,arr[5];
    scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    for(i=0;i<sum;i++){
        if(i==a||i==b||i==c||i==d||i==e){
            
            arr[j]=i;
            j++;
        }
    }
    printf("%ld %ld",sum-arr[4],sum-arr[0]);
    return 0;
}
