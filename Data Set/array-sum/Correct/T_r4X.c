#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N;
    scanf("%d", &N);
    int i;
    int sum=0;
    for(i=0;i<N;++i)
        {
        int d;
        scanf("%d", &d);
        sum+=d;
    }
    printf("%d", sum);
    return 0;
}
