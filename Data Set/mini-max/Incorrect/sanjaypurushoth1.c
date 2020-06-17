#include<stdio.h>
int main()
{
    int temp1,a[1000],b[1000],i=0,j,n,k=0,m=0,sum=0,sum1=0,cnt=0,temp,l=0,c=999999999;
    while(scanf("%d",&n)>0)
    {
        a[i]=n;
        i++;
    }
    for(j=0;j<i;j++)
    {
          for(int t=0;t<i;t++)
          {
              if(a[j]!=a[t])
              {
                  sum=sum+a[t];
              }
          }
          b[m]=sum;
          m++;
          sum=0;

    }
for(i=0;i<m;i++)
{
if(b[i]>l)
{
    l=b[i];
}
if(c>b[i])
{
    c=b[i];
}
}
printf("%d %d",c,l);

}
