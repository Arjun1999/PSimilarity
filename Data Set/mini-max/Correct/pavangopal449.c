#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a[5],b[5];
    int i;
    long long int maximum=0,minimum=0,sum;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
    }
    
    for(i=0;i<5;i++)
        {
          sum=0;
         for(int j=0;j<5;j++)
             {
             if(i!=j)
                 {
                 sum=sum+a[j];
             }
         }
        b[i]=sum;
    }
    maximum=b[0];
    minimum=b[0];
    //printf("%lld %lld %lld %lld %lld ",b[0],b[1],b[2],b[3],b[4]);
    for(i=0;i<5;i++)
        {
        if(b[i]>maximum)
            maximum=b[i];
        if(b[i]<minimum)
            minimum=b[i];
    }
    printf("%lld %lld",minimum,maximum);
    
    return 0;
}
