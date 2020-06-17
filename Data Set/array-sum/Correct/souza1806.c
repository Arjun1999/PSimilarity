#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N, i, S = 0;
    scanf ("%d", &N);
    int A[N];
    for (i = 0; i < N; i++){
        scanf ("%d", &A[i]);
        S += A[i];
    }
    printf ("%d", S);
    return 0;
}
