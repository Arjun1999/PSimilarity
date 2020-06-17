#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, A, i, sum = 0;
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &A);
        sum += A;
    }
    printf("%d\n", sum);
    return 0;
}
