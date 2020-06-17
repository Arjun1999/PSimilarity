#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,i,sum=0;
    scanf("%d",&N);
    int arr[1000];
    for(i=0;i<N;i++)
        {
        scanf("%d",&arr[i]);
        
    }
     for(i=0;i<N;i++)
        {
       sum=sum+arr[i];
        
    }
    printf("%d",sum);
    
    return 0;
}
