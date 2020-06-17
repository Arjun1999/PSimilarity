#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int size;
    int i;
    int sum = 0;
    scanf("%d", &size);
    
    for(i = 0; i < size; i++)
    {
        int num;
        scanf("%d", &num);
        sum += num;
    }
    printf("%d", sum);
    
    return 0;
}
