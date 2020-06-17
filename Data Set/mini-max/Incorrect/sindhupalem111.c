#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int sum=0,i,b[10],a[10],max,min;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
        for(i=0;i<5;i++)
        {
            sum=sum+a[i];
        }
    
        for(i=0;i<5;i++)
        {
            b[i]=sum-a[i];
        }
  
        min=b[0];
           for(i=0;i<5;i++)
           {
               if(b[i]<min)
                   min=b[i];
                            
           }
           printf("%d",min);
        max=b[0];
           for(i=0;i<5;i++)
           {
               if(b[i]>max)
                   max=b[i];
           }
                    printf("%d",max);
     return 0;

        }
    
  
