#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    long int a [5];
    for (int  i=0;i <5;i++)
    scanf("%ld ",&a [i]);
     for (int i=0;i <4;i++)
          {
            for (int j=i+1;j <=4;j++)  
       {long int t;
         if (a [i]>a [j]){
             t=a [i];
             a [i]=a [j];
             a [j]=t;
         }
         }       
            
        }
long int sum;
      for(int i=1;i<=3;i++)  {
         sum =sum+a [i];
      }  
    long int min=sum+a [0]      ;
  long  int max=sum+a [4];
    
    printf ("%ld %ld",min,max)
    ;
          
    return 0;
}
