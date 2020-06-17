#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int a[50];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	
	}
    
    int sum=0;
    for(i=0;i<n;i++)
    {
    	sum=sum+a[i];
    	
	}
     printf("%d",sum);
    return 0;
}
