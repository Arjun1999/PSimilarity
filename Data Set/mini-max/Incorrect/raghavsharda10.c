#include<stdio.h>
int main()
{
    int s=0,a[999],m=0,n=999,t,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
        s=s+a[i];
    }
    i=0
    while(i<n)
    {
        t=t-a[i];
        if(t<n)
            n=t;
        if(t>m)
            m=t;
            
    }
    printf("%d %d",n, m);
    return 0 ;
}