#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,a[100],b[100],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    for(j=0;j<n;j++)
    {
        int sum=0;
        for(i=0;i<n;i++)
         {
          sum=sum+a[i];
         }
         b[j]=sum-a[j];
    }
    int max=b[0],min=b[0];
    for(i=1;i<n;i++)
      {
        if(b[i]>max)
            max=b[i];
           
        if(b[i]<min)
            min=b[i];
        }
           printf("%d %d",min,max);
    
 }
