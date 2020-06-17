#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    int i;
    int sum;
    int number;
    
    scanf("%d", &N);
    
    for (i = 0, sum = 0; i < N; i++){
        scanf ("%d", &number);
        sum += number;
    }
    
    printf ("%d", sum);
    
    return 0;
}
