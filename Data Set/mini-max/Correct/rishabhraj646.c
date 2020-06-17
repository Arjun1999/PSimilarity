#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){

  
  long int a[5],min,max,sum;
  int i,chk=0;
  for(i=0;i<5;i++)
   scanf("%ld",&a[i]);

  max=a[0];
  min=a[0];
  for(i=1;i<5;i++)
  { if(a[i]>max)
      max=a[i];
    if(a[i]<min)
      min=a[i];
    }
 // printf("min=%ld max=%ld\n",min,max);
   sum=0;
   for(i=0;i<5;i++)
   { if(a[i]==max&&chk==0)
      { chk=1;
       continue;}
     else
      sum=sum+a[i];
      }
    
    printf("%ld ",sum);
    sum=0;
    chk=0;
    for(i=0;i<5;i++)
     { if(a[i]==min&&chk==0)
     {  chk=1;
      continue;}
       else
	sum=sum+a[i];
	}
  
     printf("%ld",sum);
     
     
    return 0;
}
