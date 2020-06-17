#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, i, A[1000], sum = 0;
 
    scanf("%d", &N);

    for(i = 0; i < N; i++){
    	scanf("%d", &A[i]);
    	sum += A[i];
    }

    printf("%d\n", sum);
    
    return 0;
}