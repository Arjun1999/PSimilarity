#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   int a[5],i,j,c,d,b[5],sum=0;
    for(i = 0;i < 5;i++){
       scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        sum+=a[i];
    }
    for(i=0;i<5;i++){
        b[i]=sum-a[i];
    } 

  for(i=0;i<5;i++){ 
    for(j=1;j<5;j++){
        if(b[i]<b[j]){
            c=b[i];
        }
    }
  }
  for(i=5;i>=0;i--){
    for(j=4;j>0;j--){
        if(b[i]>b[j]){
            d=b[i];
        }
    }
  }
  printf("%d %d ",c,d);
    return 0;
}
