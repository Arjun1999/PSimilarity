#include<stdio.h>
int main()
 {
   int a[10], n=5,temp=0,min=0,max=0;
   for(int i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
   for(int j=0;j<=n-1;j++)
    {
       for(int k=j+1;k<n;k++)
         {
            if(a[j]>a[k])
             {
                temp=a[j];
                a[j]=a[k];
                a[k]=temp;
             }
         }
     }
   for(int m=0;m<n-1;m++)
    {
      min=min+a[m];
    }
  for(int p=n-1;p>0;p--)
    {
      max=max+a[p];
    }
  printf("\n%d",min);
  printf(" %d",max);
  return 0;
}
