#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long long int arr[5],brr[5],min=9223372036854775807;
    for(int i=0;i<5;i++){
        scanf("%Ld",&arr[i]);
      }
    long long  int temp,max=0,sum=0;
    for(int i=0;i<5;i++){
        sum=0;
        for(int j=0;j<5;j++){
            if(j!=temp){
                sum=sum+arr[j];
                brr[i]=sum;
            }}
        temp++;      
        if(sum<min){
            min=sum;
        }
        if(sum>max){
            max=sum;
        }
    }
    printf("%Ld %Ld",min,max);
     
}
