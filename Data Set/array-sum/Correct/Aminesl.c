#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
scanf("%d",&N);
int A;
int untilN = 0;
int sum;
for(untilN = 0;untilN<N;untilN++)
    {
    scanf("%d",&A);
    sum += A;
}
    printf("%d",sum);
    return 0;
}

