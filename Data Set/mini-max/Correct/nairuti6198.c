#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
   // int sum[5];
    //int s;
   long long int sum1=0,temp;
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%d",&arr[arr_i]);
    }
    for(int arr_i = 0; arr_i < 5; arr_i++)
    {
      sum1=sum1+arr[arr_i];  
    }
    int long long sum2=sum1-arr[0];
    int long long sum3=sum1-arr[1];
    int long long sum4=sum1-arr[2];
    int long long sum5=sum1-arr[3];
    int long long sum6=sum1-arr[4];
    int long long sum[5]={sum2,sum3,sum4,sum5,sum6};
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
            if(sum[j]>sum[j+1])
            {
                 temp=sum[j];
                sum[j]=sum[j+1];
                sum[j+1]=temp;
            }
    }
 
   
    
    printf("%lld %lld",sum[0],sum[4]);
return 0;
}
