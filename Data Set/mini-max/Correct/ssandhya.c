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
    long int ma1,ma2,mi1,mi2;
   if(a>b) 
   {     
      ma1=a;
      mi1=b;
    }
    else
     {
       ma1=b;
       mi1=a;
      }
   if(c>d) 
   {     
      ma2=c;
      mi2=d;
    }
    else
     {
       ma2=d;
       mi2=c;
      }
    if(ma1<ma2)
      ma1=ma2;
    if(mi1>mi2)
      mi1=mi2;
    if(ma1<e)
      ma1=e;
    if(mi1>e)
       mi1=e;
    printf("%ld\t%ld",a+b+c+d+e-ma1,a+b+c+d+e-mi1);
  

    return 0;
}
