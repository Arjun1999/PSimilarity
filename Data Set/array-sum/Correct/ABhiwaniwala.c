#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N;
    scanf("%d \n",&N);
    int A[N], i,sum;
    sum=0;
    for(i=0;i<N;i++)
    {
        scanf("%d  ",&A[i]);
        sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}
