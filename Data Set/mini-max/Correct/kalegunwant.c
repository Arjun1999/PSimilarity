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
    long int a1[5],max=0,min,tmp;
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    a1[0]=b+a+c+d;
    a1[1]=b+c+d+e;
    a1[2]=c+d+e+a;
    a1[3]=d+e+a+b;
    a1[4]=e+a+b+c;
    for(i=0;i<5;i++)
    {
           if(max<a1[i])
                  max=a1[i];
    }
    min=max;
    for(i=0;i<5;i++)
    {
        if(min>a1[i])
            min=a1[i];
     }
    printf("%ld %ld",min,max);
    return 0;
}
