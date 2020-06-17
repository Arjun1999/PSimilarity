#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int x;
    int temp = 0;
    long int sum = 0;
    scanf("%d", &x);
    for(int i = 0; i < x; i++){
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}
