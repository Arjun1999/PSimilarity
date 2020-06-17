#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,N;
    scanf("%d",&N);
    int s=0,A[1000];
    for(i=0;i<N;i++)
        scanf("%d",&A[i]);
    for(i=0;i<N;i++)
        s=s+A[i];
    printf("%d",s);
    return 0;
    return 0;
}
