#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
     long r[10],check,check1,i;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    r[0]=a+b+c+d;
    r[1]=b+c+d+e;
    r[2]=c+d+e+a;
    r[3]=d+e+a+b;
    r[4]=e+a+b+c;
    check=r[0];
    check1=r[0];
    for(i=0;i<5;i++)
    {
      if(check<r[i])
          {
          
          check=r[i];  
      }
      if(check1>r[i])
          {
          
          check1=r[i];
          
      }
        
        
    }
    printf("%ld ",check1);
    printf("%ld",check);
    
    return 0;
}
