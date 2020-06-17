#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,A[10000],i,sum,k=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
    }
    {
  //  int k=0,i;
    for(i=0;i<N;i++)
    {
        k=k+A[i];
        
    
    }
    printf("%d",k);
   
   
    return 0;
    
}
    
int abc(int N,int A[100])
 {
    int k=0,i;
    for(i=0;i<N;i++)
    {
        k=k+A[i];
        
    
    }
    printf("%d",k);
    return 0;
    
    
}
}