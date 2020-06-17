#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
  int i=0,n,sum; 
    scanf("%d",&n);
    int arr[30];
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
        
    
    for(i=0;i<n;i++)
    {sum=sum+arr[i];}
    
         //printf("\na[%d]=%d", i, arr[i]);
      printf("%d",sum);
     return 0;
    }
   

