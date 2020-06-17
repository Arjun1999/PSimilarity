#include <stdio.h>

int main(void) {
	int a,arr[1000],b,i,count=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d",&b);
		count+=b;
	
	}
	printf("%d",count);
	// your code goes here
	return 0;
}
