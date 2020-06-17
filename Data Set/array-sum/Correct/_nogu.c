#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int length, number, i;
    int sum = 0;
    scanf("%d",&length);
    for(i=0;i<length;i++){
        scanf("%d",&number);
        sum += number;
    }
    printf("%d",sum);
    return 0;
}
