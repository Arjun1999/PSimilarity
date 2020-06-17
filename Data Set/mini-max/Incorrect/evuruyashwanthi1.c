#include<stdio.h>
int main()
{
    int max=0,min=0,i;
    int a[5]={1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(max!=a[4])
        {
            max=max+a[i];
        }
        printf("%d",max);
      if(min!=a[0])
      {
        min=min+a[i];
      }
      printf("%d",min);
    }
}

