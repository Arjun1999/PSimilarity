#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int count, sum, currNum;
    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &currNum);
        sum += currNum;
    }
    printf("%d", sum);
    return 0;
}
