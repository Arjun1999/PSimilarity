#include <stdio.h>

int
main() {
    int i, n;

    if(scanf("%d", &n) != 1) {
        printf("failed to read n.\n");
        return 1;
    }

    int sum = 0;
    for(i = 0; i < n; i++) {
        int s;

        if(scanf("%d", &s) != 1) {
            printf("failed to read s.\n");
            return 1;
        }

        sum += s;
    }
    printf("%d\n", sum);
}
