#include<stdio.h>
int main()
{
        int a[10000],i,sum=0;
        int n;
        scanf("%d",&n);
        for(i=0;i<n;i++)
                scanf("%d",&a[i]);
        for(i=0;i<n;i++)
                sum=sum+a[i];
        printf("%d\n",sum);
        return 0;
}


