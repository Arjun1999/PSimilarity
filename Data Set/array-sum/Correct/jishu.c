#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int A[1024],N,i,sum=0;
    scanf("%d",&N);
    for(i=0;i<=N-1;i++)
        {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}
