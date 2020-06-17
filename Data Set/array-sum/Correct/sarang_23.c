#include<stdio.h>
int main() {
int N,A[1000],sum,i=0;
    scanf("%d",&N);
    sum=0;
    for(i=0;i<N;i++)
        {
        scanf("%d",&A[i]);
        sum=sum+A[i];
    }
    printf("%d",sum);
    return 0;
}