#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i, sum = 0;
    scanf("%i", &N);
    int array[N];
    
    for (i = 0; i < N; i++)
    {
        scanf("%i", &array[i]);
        sum = sum + array[i];
    }    
    printf("%i", sum);    
    return 0;
}
