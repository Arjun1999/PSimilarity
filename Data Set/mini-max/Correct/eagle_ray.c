#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       scanf("%li",&arr[arr_i]);
    }
    
    long i,j,total,k=0,sum[5],temp;
    for(i=0;i<5;i++)
        {
        total=0;
        for(j=0;j<5;j++)
             {
                if(i==j)
                    {
                     j++;
                     }
            total=total+arr[j];
            
        }
        sum[k]=total;
        k++;
          }
         for(i=0;i<5;i++)
             {
              for(j=i+1;j<5;j++)
                 {
                   if(sum[i]>sum[j])
                       {
                         temp=sum[i];
                          sum[i]=sum[j];
                           sum[j]=temp;
                   }
              }
         }
  //  for(i=0;i<5;i++)
         printf("%ld %ld",sum[0],sum[4]);
  
    return 0;
}
