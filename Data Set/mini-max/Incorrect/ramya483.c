
#include <stdio.h>
int main() {
    int i,j,a[5];
    for(i=0;i<5;i++)
    {
                scanf("%d",&a[i]); 
    }
     for(i=0;i<5;i++)
     {
      int sum=0;
     for(j=0;j<5;j++)
     {
         if(i!=j)
             sum=sum+a[j];
         }
         printf("%d ",sum);
     }
     printf("%d %d ",a[0],a[4]);
    return 0;
     }
   
