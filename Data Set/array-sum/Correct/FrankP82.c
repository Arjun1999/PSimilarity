#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num, i, sum, temp;
    
    scanf("%d", &num);
    for(i = 0; i < num; i++)
    {
        scanf("%d", &temp);
        sum += temp;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
