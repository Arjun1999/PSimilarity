#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N,A,i;
    long int sum=0;
    scanf("%d",&N);
    for(i=0;i<N;i++)
        {
        scanf("%d",&A);
        sum+=A;
    }
    printf("%ld",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
