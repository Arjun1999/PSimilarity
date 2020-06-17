#include<stdio.h>
#include<stdlib.h>
void allocate(long long int al,long long int *a)
{
	*a=al;
}
void merge(long long int A[],int l,int mid,int r)

{
	//printf("\n\n\n%d %d %d\n",l,mid,r);
	long long int *c;
	c=(long long int *)calloc((r-l+5),sizeof(long long int));
	int i,j,k,m;
	i=l;j=mid+1;k=0;
	while((i<=mid)&&(j<=r))
	{
		if(A[i]<=A[j])
		{
			c[k]=A[i];
			i++;k++;
			//printf("1 %d %d ",k,c[k-1]);
		}
		else
		{
			c[k]=A[j];
			j++;k++;
			//printf("2 %d %d ",k,c[k-1]);
		}
		
	}
	if((i>mid)&&(j<=r))
	{
		for(m=j;m<=r;m++)
		{
			c[k]=A[m];
			k++;
			//printf("3 %d ",c[k-1]);
		}
	}
	else
	{
		if((i<=mid)&&(j>r))
		{
			for(m=i;m<=mid;m++)
			{
				c[k]=A[m];
				k=k+1;
				//printf("4 %d ",c[k-1]);
			}
		}
	}
	//printf("\n");
	/*for(m=0;m<=k-1;m++)
	{
		
		printf(" %d ",c[m]);

	}*/
	int pos;
	pos=l;
	for(m=0;m<=k-1;m++)
	{
		allocate(c[m],&A[pos]);pos=pos+1;
		
	}
	free(c);
	//int t;
	//for(t=0;t<=5;t++)
		//printf("/%d",A[t]);
}


void mergesort(long long int A[],int l,int r)

{	int mid;

	if(r<=l)
		return;
	else
	{
		mid=(l+r)/2;
		mergesort(A,l,mid);
		mergesort(A,mid+1,r);
		merge(A,l,mid,r);
	}
}

		
int main()
{ 
	int num,i;
	long long int ptr[6],sum1=0,sum2=0;
	num=5;
	
	for(i=0;i<num;i++)
	{
		scanf("%lld",ptr+i);
		
	}
	
	mergesort(ptr,0,num-1);
	
	
	for(i=0;i<4;i++)
	{
		sum1=sum1+ptr[i];
	}
	for(i=1;i<=4;i++)
	{
		sum2=sum2+ptr[i];
	}
	printf("%lld %lld",sum1,sum2);
	return(0);

}
