#include<stdio.h>
#define ll long long
void mrg(ll int arr[],ll int l,ll int m,ll int r)
{	ll int i,j,k;
	ll int n1=m-l+1;
	ll int n2=r-m;
	ll int a[n1],b[n2];
	for(i=0;i<n1;i++)
		a[i]=arr[l+i];
	for(j=0;j<n2;j++)
		b[j]=arr[m+1+j];
	i=0;j=0;k=l;
	while(i<n1 && j<n2)
	{	if(a[i]<=b[j])
		{	arr[k]=a[i];
			i++;
		}
		else{
			arr[k]=b[j];
			j++;
		}
		k++;
	}	
	while(i<n1)
	{	arr[k]=a[i];
		i++;k++;}
	while(j<n2)
	{	arr[k]=b[j];
		j++;k++;}
}
void mrgsort(ll int arr[],ll int l,ll int r)
{	if(l<r)
	{	int m=(r+l)/2;
		mrgsort(arr,l,m);
		mrgsort(arr,m+1,r);
		mrg(arr,l,m,r);
	}
}
int main()
{
	ll int i,a[5];
	for(i=0;i<5;i++) scanf("%lld",&a[i]);
	mrgsort(a,0,4);
	printf("%lld %lld",a[0]+a[1]+a[2]+a[3],a[1]+a[2]+a[3]+a[4]);
}