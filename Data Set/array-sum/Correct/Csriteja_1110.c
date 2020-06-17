#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int A[1000],N,i,sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    printf("%d",sum);
    return 0;
}
