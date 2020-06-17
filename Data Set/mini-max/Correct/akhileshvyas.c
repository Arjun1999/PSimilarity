#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    long long int arr[500],sum1=0,sum2=0;
    int i,j,temp=0;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&arr[i]);
                           }
        for(i=0;i<4;i++)
          {
         for(j=0;j<5-i-1;j++)
          {
           if(arr[j]>arr[j+1])
           {
       temp = arr[j];
       arr[j]   = arr[j+1];
       arr[j+1] = temp;
            }}}
    
    for(i=0;i<4;i++)
        {
        sum1=sum1+arr[i];
    }
    printf("%lld ",sum1);
        for(i=1;i<5;i++)
         {
         sum2=sum2+arr[i];
       }
       printf("%lld",sum2);
       return 0;
}