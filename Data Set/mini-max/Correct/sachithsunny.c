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
   long  int d;
    long int e;
   long int s[5];long int i,j,k,sum[5];
    scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&d,&e);
    s[0]=a; s[1]=b; s[2]=c; s[3]=d; s[4]=e;   
    for(i=0;i<5;i++)
      {  sum[i]=0;
        for(j=0;j<5;j++)
            if(i!=j)
               sum[i]+=s[j];
      }     
        k=j=sum[0];
       for(i=1;i<5;i++)
          {  if(sum[i]>k)
                k=sum[i];
        if(sum[i]<j)
                j=sum[i];
          }
        printf("%ld %ld",j,k);
    return 0;
}
