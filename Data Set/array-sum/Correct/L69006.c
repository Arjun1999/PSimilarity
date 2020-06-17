#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sum=0;
    int N,A,i;
    
    scanf("%d",&N);
    
    for (i=0;i<N;i++)
    {
        scanf("%d",&A);
        sum+=A;
    }
    printf("%d\n",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
