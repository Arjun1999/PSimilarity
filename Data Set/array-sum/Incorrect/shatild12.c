#include<stdio.h>
main()
{
    int a[100],i,n,t=0;

    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
             t=t+a[i];
    }
    
    printf("%d",t);
    return;


}