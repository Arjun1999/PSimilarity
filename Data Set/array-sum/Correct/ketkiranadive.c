#include<stdio.h>
#include<malloc.h>
int main(){
	int sum=0,i,*a,n;
	scanf("%d",&n);
	a = malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		scanf("%d",(a+i));
	//}
	//for(i=0;i<n;i++){
		sum = sum+a[i];
	}
	printf("%d",sum);
	return 0;
}
	

