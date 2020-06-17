#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int a[5],sum=0,t;
    int i,j;
       for(i=0;i<5;i++){
       scanf("%ld",&a[i]);
   }
      for(i=0;i<5;i++){
          sum=sum+a[i];
      }
     for(i=0;i<5;i++){
          for(j=i+1;j<5;j++){
              if(a[i]>a[j]){
                  t=a[i];
                  a[i]=a[j];
                  a[j]=t;
              }
          }
     }
    printf("%ld",sum-a[4]);
    printf(" %ld",sum-a[0]);
    return 0;
}
