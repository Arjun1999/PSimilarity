#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
long    int arr[100];
    long int  max,min,i;
    for(int arr_i = 1; arr_i <= 5; arr_i++){
       scanf("%ld",&arr[arr_i]);
    }
    long int n=1,j=1,sum[10]={0};
    for(j=1;j<=5;j++)
    {
    for(i=1;i<=5;i++)
    {
       if(i!=n)
       {
           sum[j]=arr[i]+sum[j];
          // printf("%d\n",sum[j]);
           
           
       }
       
    }
        n++;
    }
        max=sum[1];
        min=sum[1];
    for(i=1;i<=5;i++)
    {
        if(max<sum[i])
        {
            max=sum[i];
        }
        if(min>sum[i])
            min=sum[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
