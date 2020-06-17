#include<stdio.h>
int main()
{
    long long int a[100];
    long long int i,final[100],sum=0;
    long long int max,min;
    for(i=0;i<5;i++)
    {
    scanf("%lld",&a[i]);
        sum+=a[i];
    }
  
    for(i=0;i<5;i++)
    {
        
        final[i]=sum-a[i];
        
    }
 
    min=final[0];
    for(i=0;i<5;i++)
    {
        if(final[i+1]<min)
        {
            min=final[i+1];
        }
    }
    printf("%lld\t",min);
       max=final[0];
    for(i=0;i<5;i++)
    {
        if(final[i+1]>max)
        {
            max=final[i+1];
        }
    }
    printf("%lld",max);
    
    
    return 0;
}