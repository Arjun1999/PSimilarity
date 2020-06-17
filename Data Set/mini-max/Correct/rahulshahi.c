#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main() {
    int i;
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }   
    
    long long sum[5]={0,0,0,0,0};
   for(i=0;i<5;i++)
       {
     if(i!=0)
       sum[0]=sum[0]+arr[i];
     if(i!=1)
       sum[1]=sum[1]+arr[i];
     if(i!=2)
       sum[2]=sum[2]+arr[i];
     if(i!=3)
       sum[3]=sum[3]+arr[i];
     if(i!=4)
       sum[4]=sum[4]+arr[i];
   }
     long long  min=99999999999;
    for(i=0;i<=4;i++)
        {
        if(sum[i]<min)
        min=sum[i];
    }
       
    long long  max=arr[0];
         for(i=0;i<=4;i++)
        {
        if(sum[i]>max)
        max=sum[i];
    }  
        printf("%lld %lld",min,max);    
    return 0;

}