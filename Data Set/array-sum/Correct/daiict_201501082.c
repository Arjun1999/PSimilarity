#include<stdio.h>
int main()
    {
    int m,sum,i;
    scanf("%d",&m);
    sum=0;
    for(i=0;i<m;i++)
        {
        int a;
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("%d",sum);
    return 0;
}