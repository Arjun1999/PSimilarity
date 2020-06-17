#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    scanf("%d", &N);
    long long int sum = 0;
    while(N-- > 0)
    {
        int tmp;
        scanf("%d", &tmp);
        sum += tmp;
    }
    printf("%lld", sum);
    return 0;
}
