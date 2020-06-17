#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N,A[1000],i,x=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
        x=x+A[i];
    }
    printf("%d",x);
    return 0;
}
