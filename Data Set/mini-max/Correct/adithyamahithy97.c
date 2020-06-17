#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],min,max,sum[5]={0,0,0,0,0};
    int i,j;
    for(i=0;i<5;i++)
        scanf("%li",&a[i]);
    for(i=0;i<5;i++)
        {
       for(j=0;j<5;j++)
           {
           if(i==j)continue;
           else
               sum[i]=sum[i]+a[j];
       }
    }
    min=max=sum[0];
    for(i=0;i<5;i++)
        {
        if(sum[i]<min)
            min=sum[i];
        if(sum[i]>max)
            max=sum[i];
    }
    printf("%li %li",min,max);
        
    return 0;
}
