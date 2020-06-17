#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, i, a, sum=0;
    scanf("%d", &N);
    for(i=0; i<N; i++){
        scanf("%d", &a);
        sum+=a;
    }
    printf("%d", sum);
        
    return 0;
}
