#include<stdio.h>
int main()
{
	int i;
	long int a[5],sum=0,min=a[0],max=0;
	for(i=0;i<5;i++)
	{
		scanf("%ld",&a[i]);
		if(a[i]<min)
		min=a[i];
		if(a[i]>max)
			max=a[i];
        sum+=a[i];
        
	}
	
printf("%ld %ld",(sum-max),(sum-min));
	return 0;
	
}
