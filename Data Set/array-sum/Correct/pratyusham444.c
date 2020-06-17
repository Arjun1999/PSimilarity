#include<stdio.h>
int main()
    {
    int a[1000],i,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    printf("%d\n",sum);
    return 0;
}

