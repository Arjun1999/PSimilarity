#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int N;
    scanf("%d",&N);
    int A[N],i,SUM=0;
    if(N<0 || N>1000) 
        return -1;
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
        if(A[i]<0 || A[i]>1000)
            return -1;
        SUM+=A[i];
    }
    printf("%d",SUM);
    return 0;
}
