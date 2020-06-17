#include<stdio.h>
int main()
{
   long long int a[5],sum[5],i,j,t;
    for(i=0;i<5;i++)
        scanf("%lld",&a[i]);
    sum[0]=a[1]+a[2]+a[3]+a[4];
     sum[1]=a[0]+a[2]+a[3]+a[4];
    
     sum[2]=a[1]+a[0]+a[3]+a[4];
     sum[3]=a[1]+a[2]+a[0]+a[4];
     sum[4]=a[1]+a[2]+a[3]+a[0];
    for(i=0;i<4;i++)
        {
        for(j=i+1;j<5;j++)
            {
            if(sum[i]>sum[j])
                {
                t=sum[i];
                sum[i]=sum[j];
                sum[j]=t;
            }
            
}
    }
   printf("%lld %lld",sum[0],sum[4]);
    return 0;

    
    

    
        

}