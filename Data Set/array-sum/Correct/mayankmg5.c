#include<stdio.h>
int main()
    {
    int N;
    scanf("%d",&N);
    int z[N],i,k=0;
    for (i=1;i<=N;i++){
        scanf("%d",&z[i-1]);
        k=k+z[i-1];
    }
    printf("%d",k);
}
