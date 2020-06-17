
#include <stdio.h>
main ()
{
    int i,n,sum=0,j,max,min;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
      {
          if(j!=i)
          {
              sum=sum+a[j];
          }
          
          
      }
      b[i]=sum;
      
          sum=0;
    }
    max=b[0];
    for(i=0;i<n;i++)
    {
    	if(b[i]>max)
    	{
    		max=b[i];
		}
	}
	
	min=b[0];
	for(i=0;i<n;i++)
	{
		if(b[i]<min)
		{
			min=b[i];
		}
	}
	printf("%d ",min); 
	printf("%d ",max);



}
