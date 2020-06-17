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
{int n=5,i,j,temp,sum;
 
 int a[n],num[5],b[5];
 scanf("%d",&n);
 
 
        
 
    for(i=0;i<n;i++)
      
    {
        
        for(j=0,sum=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        sum=sum+a[j];
            printf("%d",sum);
        }
        num[i]=sum-a[i];
      
      }
 

   for(i=0;i<n;i++)
    {
    if(num[i]>num[i+1])
   {b[i]=num[i];
    }
        
    else
    {
    temp=b[i+1];
        b[i+1]=b[i];
        b[i]=temp;
    }
       
   }

printf("%d\t%d",b[n],b[0]);
 return 0;
}