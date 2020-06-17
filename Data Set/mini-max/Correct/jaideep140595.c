#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5],min,max,sum,b[5];
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
       scanf("%ld",&a[i]); 
    }
    for(j=0;j<5;j++)
    {
        sum=0;
    for(i=0;i<5;i++)
    {
       if(i==j)
           continue;
       else
         sum+=a[i];
    }
        b[j]=sum;
    }
    min=b[0];
    max=b[0];
    for(j=0;j<5;j++)
    {
        if(min>b[j])
            min=b[j];
        if(max<b[j])
            max=b[j];
    }
    printf("%ld %ld",min,max);
    return 0;
}
