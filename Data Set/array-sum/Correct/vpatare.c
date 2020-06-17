#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d" ,&a);
    int array[a];
    int i,sum = 0;
    for(i = 0; i < a; i++) {
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("%d", sum);
    return 0;
}
