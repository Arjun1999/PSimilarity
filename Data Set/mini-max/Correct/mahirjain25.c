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
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    long int sum,f[5],max,min;
    max=0;
    min= a+b+c+d+e;
    f[0]=a;f[1]=b;f[2]=c;f[3]=d;f[4]=e;
    int i,ct=0,j;
    for(j=0;j<5;j++){
        sum=0;
    for(i=0;i<5;i++)
        { 
        if(i!=ct)
            sum+=f[i];
        }
         max=sum>max?sum:max;
         min=sum<min?sum:min;
        ct++;
    }
    printf("%lu %lu",min,max);
    return 0;
}
