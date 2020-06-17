#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N, sum = 0, i, x;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        scanf("%d", &x);
        sum = sum + x;
    }
    printf("%d", sum);
    return 0;
}
