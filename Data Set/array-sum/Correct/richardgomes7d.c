#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int N, i, temp;
    scanf("%d", &N);
    
    int A = 0;
    for( i = 0; i < N; i++)
    {
        scanf("%d", &temp);
        A += temp;
    }
    
    printf("%d", A);
    return 0;
}
