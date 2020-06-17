#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
long int a[100],i,j,min,max,n,s[50]={0};
   for(i=0;i<5;i++)
   {
       scanf("%ld",&a[i]);
   }
    for(i=0;i<5;i++)
    {for(j=0;j<5;j++)
    {
        if(i!=j)
        {
            s[i]=s[i]+a[j];
        }
    }
    }
    min=s[0];
     max=s[0];
     for(i=0;i<5;i++)
     {
         if(min>s[i])
         {
             min=s[i];
            
         }
         if(max<s[i])
         {
             max=s[i];
         }
         
       }
     printf("%ld %ld",min,max);
     return 0;
    
}

