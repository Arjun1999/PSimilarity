#include<stdio.h>
#include<stdlib.h>

int main()
{
	double A[5];
	int i,j;
	double b,p,q;
	
	scanf("%lf %lf %lf %lf %lf",&A[0],&A[1],&A[2],&A[3],&A[4]);
	
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(A[i]>A[j])
			{
				b=A[i];
				A[i]=A[j];
				A[j]=b;
			}
		}
	}
	
	p = A[0]+A[1]+A[2]+A[3];
	q = A[4]+A[1]+A[2]+A[3];
	
	printf("%.0f %.0f",p,q);
	
	return 0;
}