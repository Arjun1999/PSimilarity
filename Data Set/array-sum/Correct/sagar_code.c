#include<stdio.h>
int main()
{
  int noe,array[1000],i,sum=0;
  scanf("%d",&noe);
  for(i=0;i<noe;i++)
  scanf("%d",&array[i]);
  for(i=0;i<noe;i++)
  sum=sum+array[i];
  printf("%d",sum);
  return 0;
}
  
