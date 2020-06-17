#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, N, list[1000], sum = 0;
    scanf("%d", &N);
    while(scanf("%d", &list[i++]) == 1);
    for (i = 0; i < N; i++)
        sum += list[i];
    printf("%d\n", sum);
    return 0;
}
