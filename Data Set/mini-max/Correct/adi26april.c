#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int smallest(long int,long int,long int,long int,long int);
long int maximum(long int,long int,long int,long int,long int);
int main(){
	
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    long int min;
    long int max;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    min=smallest(a,b,c,d,e);
    max=maximum(a,b,c,d,e);
    long long int p1=(a+b+c+d+e)-max;
    long long int p2=(a+b+c+d+e)-min;
    printf("%lld %lld",p1,p2);
}
    long int smallest(long int v,long int w,long  int x, long int y,long int z)
{
  long int c = 0;
  while (v && w && x && y && z )
  {
     v--;w--; x--;  y--; z--; c++;
  }
  return c;
}
    
   long  int maximum(long int h,long int i,long int j,long int k,long int l)
        {
        	long int largest;
if ((h>i) && (h>j) && (h>k) && (h>l))
{    
    largest=h;
}
else if ((i>h) && (i>j) && (i>k) && (i>l))
{    
    largest=i;
}
else if ((j>h) && (j>i) && (j>k) && (j>l))
{    
    largest=j;
}
else if ((k>h) && (k>i) && (k>j) && (k>l))
{    
    largest=k;
}
else 
{
largest=l;
}
        return largest;
    }

