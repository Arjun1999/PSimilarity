#include<stdio.h>
main()
{
	int n,i,sum=0;
	scanf("%d",&n);
	if(n>=1 && n<=1000)
	{
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("%d",sum);
	}
    return 0;
}