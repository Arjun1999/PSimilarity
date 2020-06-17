
#include <stdio.h>
#define MAX_SIZE 30

int main()
{
  
 
  int a[MAX_SIZE];
  int i,n,sum=0;

  
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    
    sum=sum+a[i];
    
  }    
    
  
    printf("%d",sum);

    return 0;
}
