#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a,k,l,m,n,o,max,min; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    k=b+c+d+e;
    l=a+c+d+e;
    m=a+b+d+e;
    n=a+b+c+e;
    o=a+b+c+d;
    if((k>=l) && (k>=m)&& (k>=n)&& (k>=o))
       max=k;
 if((k<=l) && (k<=m)&& (k<=n)&& (k<=o))   
        min=k;
     
    if((l>k)&&(l>m)&&(l>n)&&(l>o))
        max=l;
    if((l<k)&&(l<m)&&(l<n)&&(l<o))  
        min=l;
    if((m>l)&&(m>k)&&(m>n)&&(m>o))
        max=m;
      if((m<l)&&(m<k)&&(m<n)&&(m<o))
        min=m;
      if((n>k)&&(n>l) && (n>m)&& (n>o))
       max=n;
     if((n<k)&&(n<l) && (n<m)&& (n<o))
        min=n;
        if((o>k)&&(o>l) && (o>m)&& (o>n))
       max=o;
     if((o<k)&&(o<l) && (o<m)&& (o<n)) 
        min=o;
       
       printf("%ld %ld",min,max);
    return 0;
}
