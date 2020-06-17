#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int arr[5],b[5],i,j;
    for(i=0;i<5;i++)
    {
        scanf("%lld",&arr[i]);
    }
    for(i=0;i<5;i++)
    {
        b[i]=0;
        for(j=0;j<5;j++)
        {
            if(i!=j)
            {
                b[i]=b[i]+arr[j];
            }
        }
    }
    long long int min=b[0];
    long long int max=b[0];
    for(i=0;i<5;i++)
    {
        if(b[i]<min)
            min=b[i];
        if(b[i]>max)
            max=b[i];
    }
    printf("%lld\t%lld\n",min,max);
        return 0;
}
