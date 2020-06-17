#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N, i;
    scanf("%d", &N);
    int *arr = (int *)malloc(sizeof(int) * N);
    int sum = 0;
    for(i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}
