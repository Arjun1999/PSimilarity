#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 1000

int main() {

    int n, i, sum, x;
    scanf("%d", &n);
    sum=0;
    for(i=0;i<n;i++){
        scanf("%d", &x);
        sum=sum+x;
    }
    printf("%d", sum);
    return 0;
}
