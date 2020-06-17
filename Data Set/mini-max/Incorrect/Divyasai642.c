#include <stdio.h>


int main()
{
    int a[20],sum=0,min,max,n,i,d,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
min=a[0];

    for(i=0;i<=n;i++)
    {
     sum=sum+a[i];
    
    
}

for(i=1;i<n;i++)
{
    if(a[i]>max)
{
max=a[i];
}
else
{
    min=a[i];
}
}
c=sum-min;
d=sum-max;

printf("%d %d",c,d);
    
}
