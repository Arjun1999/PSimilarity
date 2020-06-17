#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,i,sum=0;
    scanf("%d",&N);
    int A[N];
    for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
    }
    if(N>=1 && N<=1000)
        {
        for(i=0;i<N;i++)
            {
            if(A[i]>=1 && A[i]<=1000)
                {
                sum=sum+A[i];
            }
             }
        }
    printf("%d",sum);
    
    return 0;
}
