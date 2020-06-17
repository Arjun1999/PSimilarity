#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,A,sum;
    scanf("%d",&N);
    sum = 0;
    while(N--)
        {
        scanf("%d",&A);
        sum += A;
    }
    printf("%d\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
