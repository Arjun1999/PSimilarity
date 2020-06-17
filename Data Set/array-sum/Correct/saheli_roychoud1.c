#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    int i;
    int A[1000000];
    int sum=0;
    scanf("%d",&N);
    
    for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
    }
    
    for(i=0;i<N;i++)
        {
        sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}
