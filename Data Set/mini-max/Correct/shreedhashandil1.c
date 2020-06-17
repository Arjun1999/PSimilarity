#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a,b,c,d,e;
   long long int sum=0,max,min,s=0,t=0;
    //printf("enter values");
    scanf(" %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    sum= a+b+c+d+e;
    max=a;
    if(b>max)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
        max=d;
    if(e>max)
      {
         max=e;
      }
      //printf("%lf",max);
        t=sum-max;
        printf("%lld",t);

        min=a;
    if(b<min)
        min=b;
    if(c<min)
        min=c;
    if(d<min)
        min=d;
    if(e<min)
        {min=e;
        }
        s=sum-min;
        //printf("%d",min);
        printf(" %lld",s);
        return 0;
}

