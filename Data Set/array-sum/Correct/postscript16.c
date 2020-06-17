#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int find_sum(int n, int *a) {
    int sum = 0, i;
    for (i = 0; i < n;i++) {
        sum += a[i];
    }
    return sum;
}
int main() {
    int i, n;
    int *a;
    scanf("%d", &n);
    a = (int*)malloc(sizeof(int) * n);
    for (i=0; i < n;i++) {
        scanf("%d ", (a+i));
    }
    printf("%d \n", find_sum(n, a));
    free(a);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
