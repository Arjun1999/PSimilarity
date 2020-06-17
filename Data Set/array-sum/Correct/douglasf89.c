#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int size, sum, number, count;
    sum = 0;
    scanf("%d", &size);
    for(count = 0; count < size; count++){
        scanf("%d", &number);
        sum+=number;
    }
    printf("%d", sum);
    
    return 0;
}
