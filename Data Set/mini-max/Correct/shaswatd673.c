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
    long int min;
    long int max;
     scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    //for max
    if(a<=b && a<=c && a<=d && a<=e)
        max=b+c+d+e;
    else if(b<=a && b<=c && b<=d && b<=e)
        max=a+c+d+e;
    else if(c<=a && c<=b && c<=d && c<=e)
        max=a+b+d+e;
    else if(d<=a && d<=b && d<=c && d<=e)
        max=a+b+c+e;
    else if(e<=a && e<=b && e<=c && e<=d)
        max=a+b+c+d;
        //for min
    if(a>=b && a>=c && a>=d && a>=e)
        min=b+c+d+e;
    else if(b>=a && b>=c && b>=d && b>=e)
        min=a+c+d+e;
    else if(c>=a && c>=b && c>=d && c>=e)
        min=a+b+d+e;
    else if(d>=a && d>=b && d>=c && d>=e)
        min=a+b+c+e;
    else if(e>=a && e>=b && e>=c && e>=d)
        min=a+b+c+d;
    printf("%ld %ld",min,max);
    return 0;
}
