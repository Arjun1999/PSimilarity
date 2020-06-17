#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int m1,m2,max,min,s;
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    if(a>b)
      if(a>c)
        if(a>d)
           if(a>e)
              m1=a;
           else
               m1=e;
         else
           if(d>e)
              m1=d;
           else
              m1=e;
        else
          if(c>d)
              if(c>e)
                 m1=c;
              else
                 m1=e;
          else
              if(d>e)
                 m1=d;
              else
                 m1=e;
       else
        if(b>c)
            if(b>d)
                if(b>e)
                    m1=b;
                else
                    m1=e;
            else
                if(d>e)
                   m1=d;
                else
                   m1=e; 
        else
            if(c>d)
              if(c>e)
                 m1=c;
              else
                 m1=e;
          else
              if(d>e)
                 m1=d;
              else
                 m1=e;
if(a<b)
      if(a<c)
        if(a<d)
           if(a<e)
              m2=a;
           else
               m2=e;
         else
           if(d<e)
              m2=d;
           else
              m2=e;
        else
          if(c<d)
              if(c<e)
                 m2=c;
              else
                 m2=e;
          else
              if(d<e)
                 m2=d;
              else
                 m2=e;
       else
        if(b<c)
            if(b<d)
                if(b<e)
                    m2=b;
                else
                    m2=e;
            else
                if(d<e)
                   m2=d;
                else
                   m2=e; 
        else
            if(c<d)
              if(c<e)
                 m2=c;
              else
                 m2=e;
          else
              if(d<e)
                 m2=d;
              else
                 m2=e;

    max=s-m2;
    min=s-m1;
    printf("%lld %lld",min,max);
    return 0;
}
