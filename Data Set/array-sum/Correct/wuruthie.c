#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int times;
    scanf("%d", &times);
    
    int sum;
    int i;
    for(i=0; i < times; i++){
        int arrayMember;
        scanf("%d", &arrayMember);
        sum += arrayMember;
    }
    printf("%d", sum);
    return 0;
}
