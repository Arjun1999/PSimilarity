#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
  long int i,temp,a[100],temp1,sum,min,max;
       for(i=0;i<5;i++)
       {
       scanf("%ld",&a[i]);
   }
    temp=a[0];
    for(i=1;i<5;i++){
        if(temp<a[i])
            temp=a[i];
    }
    //printf("%d",temp);//max value in the array
    temp1=a[0];
    for(i=1;i<5;i++){
        if(temp1>a[i])
            temp1=a[i];
    }
   // printf("%d",temp1);//min value in the array
    sum=0;
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
//printf("%d",sum);
    max=sum-temp1;
    min=sum-temp;
    printf("%ld %ld",min,max);
    
    return 0;
}
