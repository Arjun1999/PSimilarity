#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N=0;
    int i,j,k,sum;
    int a[1000];
    sum=0;
    
    scanf("%d", &N);
    
    for(i=1; i<=N; i++)
        {
       
         scanf("%d", &a[i]);
        sum=sum+a[i];
        
    }
      
    printf("%d", sum);
    
    
    
    return 0;
}
