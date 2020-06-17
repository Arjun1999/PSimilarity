#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int len;
    scanf("%d", &len);
    int sum = 0, val;
    
    while(len--) {
        scanf("%d", &val);
        sum += val;
    }
    
    printf("%d", sum);
    
    return 0;
}
