#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int i,A[i],sum=0,N=1;
    scanf("%d\n",&N);
  
 for(i=0;i<N;i++)
     {
     scanf("%d",&A[i]);
 }
    
    for(i=0;i<N;i++)
        {
        sum=sum+A[i];
        
    }
    printf("%d",sum);
    

     
    return 0;
}
