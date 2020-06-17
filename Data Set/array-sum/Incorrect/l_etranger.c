#include <stdio.h>

int main() {

    int iarr[] = {1, 2, 3, 4, 10, 11};
    int i = 0, sum = 0;
    
    for (i = 0; i <= 5; i++) {
        sum += iarr[i];
    }
    printf("%d\n", sum);    
    return 0;
}

