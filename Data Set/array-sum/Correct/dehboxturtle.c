#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, n, a, b;
    a = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &b);
        a = a + b;
    }
    printf("%d", a);
    return 0;
}
