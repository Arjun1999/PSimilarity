#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,i;
	scanf("%d",&a);
	int b[a],c=0;
	if(a>=1 && a<=1000)
	{
		for(i=0;i<a;i++)
		{
			scanf("%d",&b[i]);
			if(b[i]<0 || b[i]>1000)
			{
				i=i-1;
				printf("i->%d\n",i);
			}
		}
	}
	for(i=0;i<a;i++)
	c+=b[i];
printf("%d\n",c);
    
}
