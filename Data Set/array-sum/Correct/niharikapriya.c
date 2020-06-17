#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int findSum(int *b,int M)
    {
    if(M==0)
        return 0;
    else
        return (b[M-1]+findSum(b,M-1));
}

int main() {

    int N,*a,i,sum;
    scanf("%d",&N);
    a=(int*)calloc(N,sizeof(int));
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    sum=findSum(a,N);
    printf("%d",sum);
    return 0;
}
