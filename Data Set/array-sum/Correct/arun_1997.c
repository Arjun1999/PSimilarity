#include<stdio.h>
int main()
    {
    int a,i,sum=0;
    scanf("%d",&a);
    int x[a];
    for(i=0;i<a;i++)
        {
        scanf("%d",&x[i]);
        sum=sum+x[i];
    }
    printf("%d",sum);
    return 0;
}