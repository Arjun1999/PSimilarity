
#include <stdio.h>
void main()
{
    int a[10],n,s;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
        s=s+a[i];
    }
    printf("the sum is %d",s);
    }

