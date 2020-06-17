#include <stdio.h>

int main()
{
    long long int a[5],i,j,min,max,sum=0,k=0;
    for(i=0;i<5;i++)
        {
        scanf("%lld",&a[i]);
    }
    
    for(i=0;i<5;i++)
        {
        sum=0;
        for(j=0;j<5;j++)
            {
            if(i!=j)sum=sum+a[j];
        }
        k++;
        if(k==1)
            {
            min=sum;
            max=sum;
        }
        else if(sum<min)min=sum;
        else if(sum>max)max=sum;
    }
    printf("%lld %lld",min,max);
    return 0;
}
