#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0,i,N,A[i];
    scanf("%d", &N);
    for(i=0;i<N;i++) {
        scanf("%d", &A[i]);
        sum=sum+A[i];  
    }
    printf("%d", sum);
    
    return 0;
}
