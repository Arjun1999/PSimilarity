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
    long sum;
    long max;
    long min;
   long int x[5];
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    x[0]=sum-a;
    x[1]=sum-b;
    x[2]=sum-c;
    x[3]=sum-d;
    x[4]=sum-e;
    max=min=x[0];
    for(i=0;i<5;i++)
    {
        if(x[i]>max)
            max=x[i];
        else
        {
            if(x[i]<min)
                min=x[i];
        }
    }
    printf("%ld %ld",min,max);
    
    return 0;
}
