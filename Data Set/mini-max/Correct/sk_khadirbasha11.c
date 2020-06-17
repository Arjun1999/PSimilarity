#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int a[5];
   long int i;
    //int p,q;
   int min,max=0,sum=0;
   for( i=0;i<5;i++){
       scanf("%ld",&a[i]);
   }
   min=a[0];
   for( i=0;i<5;i++){
      if(max<a[i]){
       max=a[i];
      }
      
       if(min>a[i]){
           min=a[i];
       }
   
       sum=sum+a[i];
   }
    //p=sum-max;
    //q=sum-min;
       printf("%ld %ld",sum-max,sum-min);
   return 0;
}

