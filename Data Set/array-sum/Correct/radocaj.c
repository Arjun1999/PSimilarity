#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N = 0, sum = 0;
    scanf("%d", &N);
    
    int *array = (int*)malloc(sizeof(int)*N);
    for(int i=0; i < N; i++)
    {
        scanf("%d", &array[i]);
        sum += array[i];
    }
    
    printf("%d", sum);
   
    return 0;
}
