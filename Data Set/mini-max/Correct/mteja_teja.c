#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    long int sum[5],a[5],max,min;
    int i,j;
    for(int i = 0;i < 5;i++){
       scanf("%ld",&a[i]);
        }
        for(i=0;i<5;i++)
          {
            sum[0]=a[0]+a[1]+a[2]+a[3];
            sum[1]=a[0]+a[1]+a[2]+a[4];
            sum[2]=a[0]+a[1]+a[3]+a[4];
            sum[3]=a[0]+a[2]+a[3]+a[4];
            sum[4]=a[1]+a[2]+a[3]+a[4];
           }
    max=sum[0];
    min=sum[0];
    for(i=0;i<5;i++)
        {
        if(sum[i]>max)
            max=sum[i];
        if(sum[i]<min)
            min=sum[i];
        }
    printf("%ld %ld",min,max);
        
    
    return 0;
}
