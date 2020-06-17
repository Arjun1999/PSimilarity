#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,N,A[1000],sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d\n",&A[i]);
    }
    for(i=0;i<N;i++)
    {
       sum=A[i]+sum; 
    }
    
    printf("%d",sum);
    
    
    return 0;
}
