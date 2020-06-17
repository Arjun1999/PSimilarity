#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d",&a);
    int sum;
    int b;
    for (int i = 0; i < a; i++){
        scanf("%d",&b);
        sum+=b;
    }
    printf("%d",sum);
    return 0;
}
