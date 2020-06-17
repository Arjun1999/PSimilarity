#include<stdio.h>

int main()
{
    int i,sum=0,N, num;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&num);
        sum+=num;
    }
    printf("%d\n",sum);
    return 0;
}