#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

long int max(long int a,long int b)
{
  long int c;
  c = a>=b ? a : b ;
  return c ;  
}

long int min(long int a,long int b)
{
  long int c;
  c = a<=b ? a : b ;
  return c ;
}

int main()
{
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int s1,s2,s3,s4,s5;
    s1 = b+c+d+e ;
    s2 = a+c+d+e ;
    s3 = a+b+d+e ;
    s4 = a+b+c+e ;
    s5 = a+b+c+d ;
    long int maximum,minimum;
    maximum = max(max(s1,s2),max(s3,max(s4,s5))) ;
    minimum = min(min(s1,s2),min(s3,min(s4,s5))) ;
    printf("%ld %ld",minimum,maximum);
    return 0;
}
