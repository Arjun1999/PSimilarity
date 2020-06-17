#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
     int i,j;
   long long int A[5],temp,max=0,min=0;
    for(i=0;i<5;i++)
        scanf("%lld",&A[i]);
    for(i=0;i<5;i++)
        {
        for(j=0;j<5;j++)
            {
        if(A[i]>A[j])
            {
            temp=A[j];
            A[j]=A[i];
            A[i]=temp;

        }
    }

    }
     for(i=1;i<5;i++)
        min=min+A[i];
        printf("%lld",min);

   for(i=0;i<4;i++)
       max=max+A[i];
    printf(" %lld",max);
}
