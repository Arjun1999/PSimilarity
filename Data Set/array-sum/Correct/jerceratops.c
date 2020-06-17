#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int length;
    scanf("%d", &length);
    int sum = 0;
    for (int i = 0; i < length; i++) {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("%d\n", sum);
    return 0;
}
