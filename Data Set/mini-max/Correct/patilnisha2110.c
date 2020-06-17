#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int sum[5];
     long int max,min;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum[0]=a+b+c+d;
    sum[1]=b+c+d+e;
    sum[2]=a+b+d+e;
    sum[3]=a+b+c+e;
    sum[4]=a+c+d+e;
   
    max=0;
    min=a+b+c+d+e;
    for(int i=0;i<5;i++)
        {
        if(max<sum[i])
            max=sum[i];
        if(min>sum[i])
            min=sum[i];
    }
    
    printf("%ld %ld",min,max);
    return 0;
}
