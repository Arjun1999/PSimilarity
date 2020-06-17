#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
   long int a[5],i,max=0,min=0,s,t,p,q;
    for(i=0;i<5;i++)
        scanf("%ld",&a[i]);
    t=a[0];
    s=a[0];
    for(i=0;i<5;i++)
        {
        if(a[i]>=t)
        {t=a[i];
        p=i;}
     if(a[i]<=s)
          { s=a[i];
           q=i;}
    }
    for(i=0;i<5;i++)
        {
        if(i!=q)
            max=max+a[i];
         if(i!=p)
            min=min+a[i];
            
        
    }
    printf("%ld %ld",min,max);
    return 0;
}
