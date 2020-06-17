#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

    static long int a[5],i,j,minsum,maxsum,temp;
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
     for(i=0;i<5;i++)
     {
          for(j=i+1;j<5;j++)
        {
        if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
     
    }
     for(i=0;i<5;i++)
        {
     if(i<4)
         {
         minsum+=a[i];
     }
         if(i>0)
             {
             maxsum+=a[i];
             }
     }
    printf("%ld %ld",maxsum,minsum);
   return 0;
}
