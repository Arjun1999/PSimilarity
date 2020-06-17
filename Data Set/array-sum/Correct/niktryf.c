#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i, N, a, sum;
    
    scanf("%d\n", &N);
    
    sum=0;
    for(i=0;i<N;i++){
        scanf("%d ", &a);
        sum+=a;
    }
    printf("%d\n", sum);
    
    return 0;
}
