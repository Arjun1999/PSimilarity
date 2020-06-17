#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    size_t length;
    unsigned number;
    unsigned sum = 0;

    scanf("%zu", &length);
    for (size_t i = 0; i < length; ++i) {
        scanf("%u", &number);
        sum += number;
    }
    printf("%u", sum);

    return 0;
}
