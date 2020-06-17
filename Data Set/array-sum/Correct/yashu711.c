#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,sum=0,i,a[1000];
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {   
        scanf("%d",&a[i]);
        sum=sum+a[i];
       
    }   

    
    printf("%d",sum);
        
   return 0;
}
