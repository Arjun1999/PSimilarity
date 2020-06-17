#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
   long int arr[5],i,j,a[5],sum=0,temp;
    for(i=0;i<5;i++)
        scanf("%ld",&arr[i]);
    for(i=0;i<5;i++){
       for(j=0;j<5;j++){
        if(i!=j)
            sum=sum+arr[j];
    }
    a[i]=sum;
        sum=0;
    }
  for(i=0;i<5;i++){
       for(j=0;j<5;j++){
           if(a[i]<a[j]){
               temp=a[j];
               a[j]=a[i];
               a[i]=temp;
           }
       }
  }
    printf("%ld %ld",a[0],a[4]);
}
