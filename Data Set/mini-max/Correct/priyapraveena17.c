#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
       long int a,b,c,d,e,temp=0,i=0,sum,t;
    scanf("%ld%ld%ld%ld%ld",&a,&b,&c,&d,&e);
    for(i=0;i<5;i++)
    {
       if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(b>c)
        {
           temp=b;
            b=c;
            c=temp;
        }
        if(c>d)
        {
            temp=c;
            c=d;
            d=temp;
        }
        if(d>e)
        {
            temp=d;
            d=e;
            e=temp;
        }
       sum=a+b+c+d;
        t=b+c+d+e;
    }
    printf("%ld %ld",sum,t);
    return 0;
}
