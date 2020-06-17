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
    long int min, max;
    long int temp1, temp2;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    
    min = a+b+c+d+e;
    max = min;
    
    if((a<=b)&&(a<=c)&&(a<=d)&&(a<=e))
        temp1 = a;
    else if((b<=a)&&(b<=c)&&(b<=d)&&(b<=e))
        temp1 = b;
    else if((c<=a)&&(c<=b)&&(c<=d)&&(c<=e))
        temp1 = c;
    else if((d<=a)&&(d<=b)&&(d<=c)&&(d<=e))
        temp1= d;
    else if((e<=a)&&(e<=b)&&(e<=c)&&(e<=d))
        temp1 = e;
    
    max = max-temp1;
    
    if((a>=b)&&(a>=c)&&(a>=d)&&(a>=e))
        temp2 = a;
    else if((b>=a)&&(b>=c)&&(b>=d)&&(b>=e))
        temp2 = b;
    else if((c>=a)&&(c>=b)&&(c>=d)&&(c>=e))
        temp2 = c;
    else if((d>=a)&&(d>=b)&&(d>=c)&&(d>=e))
        temp2= d;
    else if((e>=a)&&(e>=b)&&(e>=c)&&(e>=d))
        temp2 = e;
    
    min = min-temp2;
    
    printf("%lld %lld", min, max);
    return 0;
}
