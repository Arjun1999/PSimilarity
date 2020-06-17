#include<stdio.h>
int main (){
	int n,j,sum,i;
	scanf("%d",&n);
	sum=0;
	for (i=0;i<n;i++){
		scanf("%d",&j);
		sum=sum+j;
	}
	printf("%d",sum);
	return 0;
}