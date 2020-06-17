#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int input;
    scanf("%d", &input);
    int array[input + 1];
    int total = 0;
    for(int i=0; i<input; i++) {
        int temp;
        scanf("%d", &temp);
        total += temp;
    }
    printf("%d", total);
    return 0;
}
