#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    long int a; 
    long int b; 
    long int c; 
    long int d;
    long int e;
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    long int min=9223372036854775807,max=0,sum=0;
    long int ar[5];
    ar[0]=a;
    ar[1]=b;
    ar[2]=c;
    ar[3]=d;
    ar[4]=e;
 int i,j,k,l;
    for(i=0;i<5;i++)
    {
      for(j=i+1;j<5;j++)
        {
          for(k=j+1;k<5;k++)
            { 
              sum=0;
              for(l=k+1;l<5;l++)
              {
                 sum=ar[i]+ar[j]+ar[k]+ar[l];
                  if(sum>max)
                     max=sum;
                 if(sum<min)
                      min=sum;
                  
              }    
          }  
      }  
    }  
    printf("%ld %ld ",min,max);
    return 0;
}
