#include<stdio.h>
int main()
{
    int h,i=0,n,k=0,t,j,f,arr[100];
    printf("enter number ");
    scanf("%d",&n);
   while(n>0)
   {
       h=n%10;
       n=n/10;
       arr[i]=h;
       i++;
   }
   int a[i],b[i];
   for(j=0;j<i;j++)
   {
        a[j]=arr[j];
        b[j]=0;
   }
   n=i;
    for(i=0;i<n;i++)
    {
        f=a[k];
        a[k]=0;
        for(j=0;j<n;j++)
            b[i]=b[i]+a[j];

        a[k]=f;
        k++;
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
    printf("%d  %d",b[0],b[n-1]);
}
