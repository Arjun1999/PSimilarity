#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,i,j,sum;
    scanf("%d ", &N);
    int a[N];
    for(i=0; i<N; i++)
        {
        scanf("%d ", &a[i]);
    }
    for(j=0; j<N-1; j++)
        {
        sum=a[j]+a[j+1];
        a[j+1]=sum;
    }
    printf("%d ",sum);
    return 0;
}
