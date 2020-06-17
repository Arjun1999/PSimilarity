void main()
{
	int n,i,j;
	printf("Enter the no of terms in the array");
	int arr[n];
	scanf("%d",&n);
	printf("Enter the no of terms in the array");
	for(i=0;i<n;i++)
		{
			printf("Enter the no in the array");
			scanf("%d",&arr[i]);
		}
	int sum=0;
	for(j=0;j<n;j++)
		{
			sum=sum+arr[j];
		}
	printf("The Sum Of the array is %d ",sum);
		
}
