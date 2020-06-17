#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int sum=0,j,i,min=0,max;
    long int *arr = malloc(sizeof(long int) * 5);
   long int *a=malloc(sizeof(long int)*5);
    for(i = 0; i < 5; i++){
       scanf("%ld",&arr[i]);
       
    }
     max=arr[0];
   // min=arr[0];
    //printf("min=%dmax=%d",min,max);
    for(i=0;i<5;i++)
    {sum=0;
    
        for(j=0;j<5;j++)
        {
            if(i==j){
                continue;
            }
           sum+=arr[j];
        }
      //  printf("\n%d",sum);
     if(sum>max)
         max=sum;
     a[i]=sum;
    }
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
