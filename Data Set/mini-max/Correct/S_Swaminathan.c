#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int sum=0,max=0,min=0,i=0,add=0;
    long int a[5]; 
    for(i=0;i<5;i++)
        {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<5;i++)
    {
            sum=sum+a[i];
            }
    max=0;
    min=sum;
     for(i=0;i<5;i++)
         {
         add=sum-a[i];
         if(add>max)
             max=add;
         if(add<min)
             min=add;
        }
    printf("%ld %ld",min,max);
        
    }
  