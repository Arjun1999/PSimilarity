#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int a[5];
    long int b[5];
   long int i,sum=0,min1,max1;
    for( i=0;i<5;i++){
        scanf("%lu",&a[i]);
    }
  for(i=0;i<5;i++){
      sum=sum+a[i];
  }
    for(i=0;i<5;i++){
        b[i]=sum-a[i];
    }
    min1=b[0];
    max1=b[0];
    for(i=0;i<5;i++){
       if(min1<b[i])
           min1=b[i];
        if(max1>b[i])
            max1=b[i];
    }
    printf("%lu %lu",max1,min1);
    return 0;
}
