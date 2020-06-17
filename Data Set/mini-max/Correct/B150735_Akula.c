#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int min(long int a,long int b,long int c,long int d)
{
long int m;
if(a<b)
m=a;
else
m=b;
if(c<m)
m=c;
if(d<m)
m=d;
return (m);
}

long int ma(long int a,long int b,long int c,long int d)
{
long int max,k;
if(a>b)
max=a;
else
max=b;
if(c>max)
max=c;
if(d>max)
max=d;
return (max);
}


int main()
{
long int a[5],i,p,q,r,s,t,maxi,mini;
for(i=0;i<5;i++)
scanf("%ld",&a[i]);
p=a[0]+a[1]+a[2]+a[3];
q=a[1]+a[2]+a[3]+a[4];
r=a[0]+a[1]+a[3]+a[4];
s=a[0]+a[1]+a[2]+a[4];
t=a[0]+a[2]+a[3]+a[4];
//printf("%ld\n%ld\n%ld\n%ld\n",p,q,r,s);
maxi=ma(p,q,r,s);
if(maxi<t)
maxi=t;
mini=min(p,q,r,s);
if(mini>t)
mini=t;
printf("%ld %ld\n",mini,maxi);
return 0;
}