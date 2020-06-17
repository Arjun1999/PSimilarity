#include<stdio.h>
int comb(int,int);
int fact();
int main()
{
    int n,i,somin=0,somax=0,t,k;
    printf("enter n");
    scanf("%d,&n");
    int a[n];
    printf("enter %d elements",n)
    for(i=0,i<n;i++)
    {
        scanf("%d"&a[i])
    }
    for(i=0;i<n;i++)
    {
        for(t=0;t<n;t++)
        {
            if(a[i]>a[t])
            {
              a[i]=a[t]+a[i];
              a[t]=a[i]-a[t];
              a[i]=a[i]-a[t];
            }
        }
    }
    printf("enter k");
    scanf(%d,&k);
    for(i=n-1;i>=k-1;i--)
    {
        somax=somax+((a[i])*(comb(i,k-1)));
    }
    for(i=0;i<n-k;i++)
    {
        somin=somin+((a[i])*(comb(n-i-1,k-1)));
    }
    printf("%d %d",somin,somax);
    return 0;
}
int comb(int x,int y)
{
    int z;
    z=fact(x)/(fact(x-y)*fact(y));
    return z;
}
int fact(int p)
{
    int l,f=1;
    for(l=2;l<=p;l++)
    {
        f=f*l;
    }
    return f;
}

