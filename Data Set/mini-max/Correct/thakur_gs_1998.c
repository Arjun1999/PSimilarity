#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a[5];  long int sum=0,max,min,temp; int i,k,j;
  for(i=0;i<5;i++)
  {scanf("%ld",&a[i]);}
    
  for(i=0;i<5;i++)
        {for(k=0;k<4;k++)
            {if(a[k] > a[k+1])
             { temp=a[k];
            a[k]=a[k+1];
              a[k+1]=temp;}}}


   for(i=0;i<5;i++)
   {  sum=sum+a[i];}

    max=sum-a[0];
   min=sum-a[4];
    printf("%ld %ld",min,max);
    return 0;
}
