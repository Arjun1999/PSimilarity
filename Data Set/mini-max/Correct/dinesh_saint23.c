#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,a1,b1,c1,d1,e1; 
    long int b; 
    long int c; 
    long int d;
    long int e;
       scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    a1=b+c+d+e;
    b1=a+c+d+e;
    c1=a+b+d+e;
    d1=a+b+c+e;
    e1=a+b+c+d;
   
    {
        if((a1<b1)&&(a1<c1)&&(a1<d1)&&(a1<e1))
    printf("%lld ",a1);
       else if((b1<a1)&&(b1<c1)&&(b1<d1)&&(b1<e1))
    printf("%lld ",b1);
     else if((c1<b1)&&(c1<a1)&&(c1<d1)&&(c1<e1))
    printf("%lld ",c1);
         else  if((d1<b1)&&(d1<c1)&&(d1<a1)&&(d1<e1))
    printf("%lld ",d1);
     else
         printf("%lld ",e1);

        
    }
     {
        if((d1>a1)&&(d1>c1)&&(d1>b1)&&(b1>e1))
        printf("%lld ",d1);
    else if((c1>a1)&&(c1>b1)&&(c1>d1)&&(c1>e1))
        printf("%lld ",c1);
    else if((b1>a1)&&(b1>c1)&&(b1>d1)&&(b1>e1))
        printf("%lld ",b1);
    else if((a1>b1)&&(a1>c1)&&(a1>d1)&&(a1>e1))
    printf("%lld ",a1);
        else
        printf("%lld ",e1);
        }
     return 0;
}
