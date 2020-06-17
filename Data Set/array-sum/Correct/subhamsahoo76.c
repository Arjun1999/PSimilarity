#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
    int A[N],sum=0;
    if(N>0 && N<=1000){
        for(int i=0;i<N;i++)
            {
            scanf("%d",&A[i]);
            if(A[i]>=0 && A[i]<=1000)
                sum=sum+A[i];
        }
    }

    printf("%d",sum);   
    return 0;
}
