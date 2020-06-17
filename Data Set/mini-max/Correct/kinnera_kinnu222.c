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
    long int e,a1[5],min,max;
    int i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    a1[0]=b+c+d+e;
    a1[1]=a+c+d+e;
    a1[2]=a+b+d+e;
    a1[3]=a+b+c+e;
    a1[4]=a+b+c+d;
    min=a1[0];
    max=a1[0];
    for(i=0;i<5;i++)
    {
       if(min>a1[i])
           min=a1[i];
       else if(max<a1[i])
           max=a1[i];
    }
    printf("%ld %ld",min,max);
    return 0;
}
