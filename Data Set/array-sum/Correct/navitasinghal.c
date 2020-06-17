#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        int N;
        scanf("%d",&N);
        int i,A[N];
        for(i=0;i<N;i++)
            {
            scanf("%d ",&A[i]);
            
        }
    
    int sum=0;
    for(i=0;i<N;i++)
        {
        sum=sum+A[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
