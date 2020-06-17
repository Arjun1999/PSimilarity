#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
  int a[5],i,p,q,temp=0,sum1=0;sum2=0;
  for(i=0;i<5;i++)
  scanf("%d",&a[i]);
  
   for(i=0;i<5;i++)
   {
       for(j=0;j<4;j++){
     if(a[j]>a[j+1]){
       temp=a[j];
       a[j+1]=a[j];
       a[j]=temp;
     }
       }
   }
   p=a[0];
   q=a[n-1];
      for(i=0;i<5;i++)
      {
          if(p<a[i])
          sum1=sum1+a[i];
          if(q>a[i])
          sum2=sum2+a[i];

      }
      printf("%d %d",sum2,sum1);
      return 0;
        

   } 
