#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{   
    int N, sum = 0;
    scanf("%d", &N);
    int array[N];
    for(int i = 0;i < N;i++){
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("%d", sum);
    return 0;
}
