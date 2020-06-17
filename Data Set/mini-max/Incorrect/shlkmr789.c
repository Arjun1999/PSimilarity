#include<stdio.h>
int main()
{
    int mini,min,max,maxi,i,j,n;
    int sum1=0;
    int sum2=0;
    int a[1010];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    min=a[0];
    mini=0;
    for(i=0;i<n;i++)
    {
       
        
            if(a[i]<=min)
            {min=a[i];
             mini=i;}
            
        
    }
    max=a[0];
    maxi=0;
     for(i=0;i<n;i++)
    {
        
        
        
            if(a[j]>=max)
            {max=a[j];
             maxi=i;}
            
        
    }
    
    for(i=0;i<n;i++)
    {
        if(i==mini)
            continue;
        else
            sum2+=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==maxi)
            continue;
        else
            sum1+=a[i];
    }
    printf("%d  %d",sum1,sum2);
    
}