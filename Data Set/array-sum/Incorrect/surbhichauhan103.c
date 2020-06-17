#include<stdio.h>
int main()
    {
    int size,i,a[100],sum=0;
    scanf("%d",&size);
    for(i=1;i<=size;i++)
        {
        scanf(" %d",&a[i]);
    }
    for(i=1;i<=size;i++)
        {
        sum=sum+a[i];
    }
    printf("%d",sum);
    return 0;
}