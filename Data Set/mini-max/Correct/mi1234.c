#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
 int i;
 long int sum[5];
  long int max,min; 
 long int a;
 long int b; 
 long int c; 
 long int d;
long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum[0]=b+c+d+e;
    sum[1]=c+d+e+a;
    sum[2]=d+e+a+b;
    sum[3]=e+a+b+c;
    sum[4]=a+b+c+d;
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
