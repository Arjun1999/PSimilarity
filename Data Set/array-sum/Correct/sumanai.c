#include <stdio.h>

int main() {
    int n, i, c;
    int sum = 0;
    scanf("%d", &n);
    for(i = 0; i< n; i++) {
        scanf("%d", &c);
        sum += c;
    }
    printf("%d\n", sum);
    return 0;
}
