#include <stdio.h>

int main() {

    int N, i, sum = 0;
    
    scanf("%d", &N);
    int array[N];
    for (i = 0;i < N;i++) 
        scanf("%d", &array[i]);
    for (i = 0;i < N;i++)
        sum += array[i];
    
    printf("%d", sum);
    return 0;
}
