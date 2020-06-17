#include <stdio.h>
int main()
{
   unsigned long long int a[5],max,min,sum=0;
    int i;
    scanf("%lld",&a[0]); 
    max=a[0]; 
    min=a[0];
    sum=sum+a[0];
    for(i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
        sum=sum+a[i];
    }
    printf("%lld %lld",sum-max,sum-min);
    return 0;
}
