#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,A,i,s=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A);
        s+=A;
    }
    printf("%d",s);
    return 0;
}
