#include <stdio.h>
int main()
{
    int n,i,t,p,b=0,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(p=0;p<n-1;p++)
    {
        for(i=0;i<n-p;i++)
        {
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)
      b=b+a[i];
    for(i=1;i<=n;i++)
     c=c+a[i];
     printf("%d %d",b,c);
}