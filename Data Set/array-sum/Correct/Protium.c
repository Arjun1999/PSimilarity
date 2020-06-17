#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, sum, val;
    scanf("%d", &val);
    i = val;
    while(i--) {
        scanf("%d", &val);
        sum += val;
    }
    printf("%d", sum);
    return 0;
}
