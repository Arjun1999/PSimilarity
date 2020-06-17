#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
     long long int arr[1000000],b[1000000];
    int i,j;
    long long min,max,temp;
     long long int sum=0;
    int s=4;
    //int *arr = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++)
    {
       scanf("%ld",&arr[i]);
    }
    
        for(i=0;i<5;i++)
        sum=sum+arr[i];
        for(j=0;j<5;j++)
        b[j]=sum-arr[j];
     for(i=0;i<5;i++)
     {
         for(j=i+1;j<5;j++)
         {
             if(b[i]>b[j])
             {
                 temp=b[i];
                 b[i]=b[j];
                 b[j]=temp;
             }
         }
     }
    
    
    printf("%lld %lld",b[0],b[s]);

    return 0;
}

 