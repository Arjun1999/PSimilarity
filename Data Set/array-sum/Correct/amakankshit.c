#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int A[1000],N,i;
    long int sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    printf("%ld",sum);    
    return 0;
}
