#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int N;int sum=0;
    scanf("%d \n",&N);
    int A[N];
    for(int i=0;i<N;i++)
        {
        scanf("%d ",&A[i]);
        sum+=A[i];
    }
    printf("%d",sum);
    return 0;
}
