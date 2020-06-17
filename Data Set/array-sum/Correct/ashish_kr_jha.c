#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
            int N,sum=0,i;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
        {
            scanf("%d",&A[i]);
            sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}
