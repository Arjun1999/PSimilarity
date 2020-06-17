#include<stdio.h>
int main()
{
	int n,a[1001],i,s=0;
	scanf("%d",&n);
	if(n>=1&&n<=1000){
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>=0&&a[i]<=1000){
            s=s+a[i];}
		}
	}
	printf("%d",s);
    return 0;
}