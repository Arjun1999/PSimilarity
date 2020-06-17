#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  long long int a,b,c,d,e,min,max;
  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
  if((a>b)&&(a>c)&&(a>d)&&(a>e))
  {
    min=b+c+d+e;
  }
  else if((b>a)&&(b>c)&&(b>d)&&(b>e))
  {
    min=a+c+d+e;
  }
  else if((c>b)&&(c>a)&&(c>d)&&(c>e))
  {
    min=b+a+d+e;
  }
  else if((d>b)&&(d>c)&&(d>a)&&(d>e))
  {
    min=b+c+a+e;
  }
  else
  {
    min=a+b+c+d;
  }
  if((a<b)&&(a<c)&&(a<d)&&(a<e))
  {
    max=b+c+d+e;
  }
  else if((b<a)&&(b<c)&&(b<d)&&(b<e))
  {
    max=a+c+d+e;
  }
  else if((c<b)&&(c<a)&&(c<d)&&(c<e))
  {
    max=b+a+d+e;
  }
  else if((d<b)&&(d<c)&&(d<a)&&(d<e))
  {
    max=b+c+a+e;
  }
  else
  {
    max=a+b+c+d;
  }
    printf("%lld %lld",min,max);
    return 0;
}
