#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum_input(int amount) {
    int current = 0;
    int sum = 0;
    while(amount--){
        scanf("%d", &current);
        sum += current;
    }
    return sum;
}

int main() {

    int amount = 0;
    scanf("%d", &amount);
    if (amount == 0){
        return 1;
    }
    printf("%d", sum_input(amount));    
    return 0;
}
