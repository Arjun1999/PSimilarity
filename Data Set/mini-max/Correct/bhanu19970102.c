#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int sum=0,sum1=0,i,t;
   long int *a = malloc(sizeof(int) * 5);
    for(i = 0; i < 5; i++){
       scanf("%ld",&a[i]);
    }
    for(i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++){
        if(a[j]>a[j+1])
        {
            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;
           }
        }
        
        }

    for(i=0;i<4;i++)
    {
        sum=sum+a[i];
        sum1=sum1+a[i+1];
    }
    printf("%ld %ld",sum,sum1);
    return 0;
}
