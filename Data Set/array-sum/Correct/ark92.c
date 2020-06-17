#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,j,sum=0;
    int A[1000];
    scanf("%d",&N);
    for(i=0;i<N;++i)
    {
        scanf("%d",&A[i]);   
    }
    for(i=0;i<N;++i)
    {
        sum+=A[i];
    }
    printf("%d",sum);
    return 0;
}
