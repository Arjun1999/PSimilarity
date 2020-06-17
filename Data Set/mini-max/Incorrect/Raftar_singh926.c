#include<stdio.h>
int main()
{
  int arr[5],minsum=0,maxsum=0,temp;
  int i,j;
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }

  for(i=0;i<5;i++) 
  {
    for(j=0;j<4;j++) 
    {
      if(arr[j]>arr[j+1])
      {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
      }
    }
  }

  for(i=0;i<4;i++) 
  {
    minsum+=arr[i];
  }

  for(i=1;i<5;i++)
  {
    maxsum+=arr[i];
  }

  printf("%d  %d",minsum,maxsum);

}
