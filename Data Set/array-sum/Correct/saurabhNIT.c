 #include<stdio.h>
#include<malloc.h>
int main()
{

	int i,n,sum=0;
	scanf("%d",&n);
	int *a;
	a=(int *)malloc(n*sizeof(int));
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
