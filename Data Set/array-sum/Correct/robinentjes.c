#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        int in;
        scanf("%d", &in);
        sum += in;
    }
    printf("%d\n", sum);
    return 0;
}
