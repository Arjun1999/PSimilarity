#include<stdio.h>
#include<stdlib.h>
int main()
{
  	int *a;
    int n,i,j,min=0,max=0,sum=0;
	scanf("%d",&n);
	a=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		min=sum;
		sum=0;
		for(j=0;j<n;j++)
		{
			sum=sum+a[j];
		}
		sum=sum-a[i];
		if(min>sum)
		{
			min=sum;
			//printf("min in loop: %d\n",min);
		}
		else if(max<sum)
		{
			max=sum;
			//printf("max is: %d\n",max);
		}
	    printf("sum is: %d\n",sum);
	}
	printf("max element is %d: ",max);
	printf("\nmin element is %d: ",min);
	
	return 0;
}