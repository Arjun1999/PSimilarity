#include<stdio.h>
int main()
{
    long long int a[100],b[100],t,s=0;
    int i,j;
    for(i=0;i<5;i++);
    scanf("%lld "&a[i]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            s+=a[j];
        }
      b[i]=s-a[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(b[i]>b[j])
            {
                t=b[i];
                b[i]=b[j];
                b[j]=t;
            }
                
        }
    }

    
    printf("%lld %lld",b[0],b[4]);
    return 0;
}
    
    
