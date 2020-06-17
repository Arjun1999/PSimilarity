#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int num;
    int sum;
    sum =0;
    int i;
    i=1;
    while (i<7)
        {
    scanf("%d",&num);
    sum = sum + num;
        i++;
    }
    printf("sum: %d",sum);
    return 0;
}
