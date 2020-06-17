#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int size;
    scanf("%d", &size);
    int *array = malloc(sizeof(int) * size), sum = 0;
    for(int i = 0; i < size; i++) {
        scanf("%d", array + i);
        sum += *(array + i);
    }
    printf("%d\n", sum);
    return 0;
}
