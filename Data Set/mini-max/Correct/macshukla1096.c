#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void swap(long int *a,long int *b)
    { long int temp;
     temp=*a;
    *a=*b;
    *b=temp;}

int main(){
   long int i,n[5],j,min=0,max=0;
   for(i=0;i<5;i++)
       scanf("%ld",&n[i]);
   for(j=0;j<5;j++)
    for(i=0;i<4;i++)
     if(n[i]>n[i+1])
      swap(&n[i],&n[i+1]);
   
     for(i=0;i<4;i++)
      min+=n[i];

       for(i=1;i<5;i++)
      max+=n[i];
       
       printf("%ld %ld",min,max);

     return 0;
}
