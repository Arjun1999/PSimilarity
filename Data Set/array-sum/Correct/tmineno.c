#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0, i = 0;
    scanf("%d", &i);
    while(scanf("%d", &i) > 0){
        sum += i;
    }
    printf("%d\n", sum);
    return 0;
}
