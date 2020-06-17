#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int num = 0;
        scanf("%d", &num);
        sum += num;
    }
    printf("%d", sum);
    return 0;
}
