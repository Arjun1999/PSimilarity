#include<stdio.h>
main()
{
		unsigned long long  max=-1,min=-1,a[5],sum=0;
         int i=1;
        scanf("%lld",&a[0]);
        max=a[0];min=a[0];
		for(;i<5;i++)
		{scanf("%lld",&a[i]);
		if(min>a[i])
		min=a[i];
		if(a[i]>max)
		max=a[i]; sum+=a[i];}
		
	
		printf("%lld %lld",sum-max+a[0],sum-min+a[0]);
}