#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,A[1000],total,i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
        }
    for(i=0;i<N;i++)
        {
        total+=A[i];
        }
    printf("%d",total);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
