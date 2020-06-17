#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, sum=0;
    
    scanf("%d",&N);
    int *A = (int*)malloc(N*sizeof(int));
    
    for(int i=0; i<N; i++){
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    
    printf("%d",sum);
    
    return 0;
}
