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
    long long int max=0;
    long long int min=0;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int x[5];
    x[0]=a;
    x[1]=b;
    x[2]=c;
    x[3]=d;
    x[4]=e;
    for(int i=0;i<5;i++)
    {
          for(int j=i+1;j<5;j++)
          {
            long int temp;
              if(x[i]>x[j])
              {temp=x[i];
               x[i]=x[j];
               x[j]=temp;}
          }
    
    }
    for(int i=0;i<4;i++)
        min=min+x[i];
    for(int j=1;j<5;j++)
        max=max+x[j];
    printf("%lld %lld",min,max);
    return 0;
}
