#include <stdio.h>
int main()
    {
    int sum=0,a[1000],i,N;
    scanf("%d",&N);
    for (i=0;i<N;i++)
        {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
        {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}