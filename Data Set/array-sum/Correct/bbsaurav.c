#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    int sum = 0, i, in;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &in);
        sum += in;
    }
    printf("%d\n", sum);
    return 0;
}
