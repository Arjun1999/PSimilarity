#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
long int max(long int,long int);
long int min(long int,long int );
int main(){
    long long int a; 
    long long int b; 
    long long int c; 
    long long int d;
    long long int e;
    long long int sum1,sum2,sum3,sum4,sum5;
    long long int sum_x,sum_y,sum_z;
    
    scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e);
     sum1=b+c+d+e;
     sum2=a+c+d+e;
     sum3=a+b+d+e;
     sum4=a+b+c+e;
     sum5=a+b+c+d;
    
      sum_x=min(sum1,sum2);
     sum_y=min(sum3,sum4);
     sum_z=min(sum_x,sum_y);
     sum_z=min(sum_x,sum_y);
     sum_z=min(sum_z,sum5);
      printf("%lld",sum_z);
     sum_x=max(sum1,sum2);
     sum_y=max(sum3,sum4);
     sum_z=max(sum_x,sum_y);
     sum_z=max(sum_x,sum_y);
     sum_z=max(sum_z,sum5);
       printf(" %lld",sum_z);
    return 0;
}
long int max(long int j,long int k )
    {
  if(j>k)
      return j;
    else return k;
    
}

long int min(long int j,long int k )
    {
  if(j>k)
      return k;
    else return j;
    
}