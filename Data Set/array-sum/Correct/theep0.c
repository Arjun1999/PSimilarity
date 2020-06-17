#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, n, t, s=0;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &t);
        s += t;
    }
    printf("%d", s);
    return 0;
}
