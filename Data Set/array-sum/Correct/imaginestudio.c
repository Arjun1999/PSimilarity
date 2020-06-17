#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, count;
    int num, sum = 0;
    
    scanf("%d", &count);
    
    for(i = 0; i < count; i++)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("%d", sum);

    return 0;
}
