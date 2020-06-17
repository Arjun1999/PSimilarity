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
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long  int min,max;
    
    long  int sum1=a+b+c+d;
     long  int sum2=a+b+c+e;
     long  int sum3=a+b+e+d;
     long  int sum4=a+c+e+d;
     long  int sum5=e+b+c+d;
  min=sum1;
        if(sum2<min)
        min=sum2;
        if(sum3<min)
        min=sum3;
        if(sum4<min)
        min=sum4;
        if(sum5<min)
        min=sum5;
      max=sum1;
        if(sum2>max)
        max=sum2;
        if(sum3>max)
        max=sum3;
        if(sum4>max)
        max=sum4;
        if(sum5>max)
        max=sum5;
        
        printf("%ld %ld", min, max);
    return 0;
}
