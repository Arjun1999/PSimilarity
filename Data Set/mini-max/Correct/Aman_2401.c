#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long long int arr[5];int i,j;
  long long int max=0,min=0,k;
    for(i=0;i<5;i++) {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<5;i++) {
        for(j=0;j<5-i-1;j++) {
            if(arr[j]>arr[j+1]) {
                k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
    for(i=1;i<5;i++) {
        max=max+arr[i];
    }
    for(i=0;i<4;i++) {
        min=min+arr[i];
    }
    printf("%lld %lld",min,max);
    
    return 0;
}
