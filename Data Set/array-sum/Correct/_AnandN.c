#include<stdio.h>
#include<stdlib.h>

/*void solveMeFirst(int a,int b);*/
void addArray(int a[],int len);

int main(){

	int n,i;
	int *a;
	scanf("%d",&n);
	a = (int *)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{	
		scanf("%d",&a[i]);
	}
	addArray(a,n);
	return 0;
}

void addArray(int a[],int len){
	int sum = 0;
    int i;

	for(i=0;i<len;i++)
	{
		sum = sum + a[i];
	}
    printf("%d\n",sum);
}

/*void solveMeFirst(int a,int b){

	printf("%d\n",a+b);
}*/