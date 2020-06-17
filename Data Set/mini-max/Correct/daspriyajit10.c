#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
 long int a,b,c,d,e,u,v,w,x,y;   
    scanf("%ld",&a);
    scanf("%ld",&b);
    scanf("%ld",&c);
    scanf("%ld",&d);
    scanf("%ld",&e);
    u=b+c+d+e;
    v=a+c+d+e;
    w=a+b+d+e;
    x=a+b+c+e;
    y=a+b+c+d;
            if(u<v&&u<w&&u<x&&u<y)
            {
            printf("%ld ",u);
        }
          else if(v<u&&v<w&&v<x&&v<y)
            {
            printf("%ld ",v);
        }
    else if(w<u&&w<v&&w<x&&w<y)
            {
            printf("%ld ",w);
        }
    else if(x<y)
    {
        printf("%ld ",x);
    }
    else
        {
        printf("%ld ",y);
}
        if(u>v&&u>w&&u>x&&u>y)
            {
            printf("%ld ",u);
        }
          else if(v>u&&v>w&&v>x&&v>y)
            {
            printf("%ld ",v);
        }
    else if(w>u&&w>v&&w>x&&w>y)
            {
            printf("%ld ",w);
        }
    else if(x>y)
    {
        printf("%ld ",x);
    }
    else
        {
        printf("%ld ",y);
}
    
    return 0;
}
