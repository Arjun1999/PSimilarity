#include <stdio.h>

int main() {
    int sum = 0, N, i, value;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &value);
        sum += value;
    }

    printf("%d", sum);

    return 0;
}