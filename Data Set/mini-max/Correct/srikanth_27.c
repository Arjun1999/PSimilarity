
#include<stdio.h>
int main()
{
  int a[5],t=0,j,i;

  for(i=0;i<5;i++)
    scanf("%d",&a[i]);

  for(j=0;j<5-1;j++)
  {
    for(i=0;i<5-j-1;i++)
    {
      if(a[i]>a[i+1])
      {
	t=a[i];
	a[i]=a[i+1];
	a[i+1]=t;
      }
    }
   }

  long int min=0,max=0;
  for(i=1;i<5;i++)
  {

    max=max+a[i];
  }
  for(i=0;i<4;i++)
  {

    min=min+a[i];
  }
  printf("%ld\t%ld",min,max);
    return 0;


}