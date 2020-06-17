#include<stdio.h>
int main()
{
    int a[20000],m,b[20000],n,sum,i,min,max,j;
    scanf("%d",&n);
    m=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            
            if(i==j)
            {
                continue;
            }
            else{
                sum=sum+a[j];
            }
    
        }
        b[i]=sum;
        sum=0;
       
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            {
                m=a[i];
                a[i]=a[j];
                a[j]=m;
            }
        }
    }
    printf("%d",b[0]);
printf("%d",b[n-1]);
    return 0;
}