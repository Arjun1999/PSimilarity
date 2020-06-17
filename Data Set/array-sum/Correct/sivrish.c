#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int N,i;
start:    
    scanf("%d",&N);
    if(N<1 || N>1000)
            goto start;
    else{
    int A[N];
    int sum=0;
    for(i=0;i<N;i++)
        {
     arrayStart:   
        scanf("%d ",&A[i]);
        if(A[i]<0 || A[i]>1000)
            goto arrayStart;
        else
            {
            sum+=A[i];}
    }
    printf("%d",sum);
    
    }
    return 0;
}
