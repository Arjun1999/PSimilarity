#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int arr[5]; 
    scanf("%lld %lld %lld %lld %lld",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4]);
    int i,j;
    for(i=0;i<5;i++)
        {
        for(j=0;j<4-i;j++)
            {
            if(arr[j]>arr[j+1])
                {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    long long int sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    printf("%lld %lld",sum-arr[4],sum-arr[0]);
    return 0;
}
