
#include <stdio.h>

int main()
{
    int i,j,n;
    int a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         b[i]=0;   
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(i==j)
        continue;
        else
        b[i]=b[i]+a[j];
    }
}
    int m,N;
    m=b[0];
    N=b[0];
    for(i=1;i<n;i++)
    {
    if(m<b[i])
    m=b[i];
    else if(N>b[i])
    N=b[i];    
    }
    printf("%d %d",N,m);
    
    return 0;
}