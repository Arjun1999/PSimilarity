#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, num, sum, i;
    scanf ("%d", &n);

    for (i = 0, sum = 0; i < n; i++) {
        scanf ("%d", &num);
        sum += num;
    }

    printf ("%d", sum);
   
    return 0;
}
