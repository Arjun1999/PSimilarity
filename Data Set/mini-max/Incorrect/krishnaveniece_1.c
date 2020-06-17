
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[100],msum,masum,i,j;
   for(int i=0;i<5;i++)
   {
       scanf("%d ",&a[i]);
   }
    
    for(int i=0;i<5;i++)
    {
        for(j=0;i<5-i-1;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<4;i++)
   {
       msum=msum+a[i];
   }
    for(int i=1;i<5;i++)
   {
       masum=masum+a[i];
}
    printf("%d %d",msum,masum);
    
}
