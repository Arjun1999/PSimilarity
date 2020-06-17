#include <stdio.h>

int main()
{
    int a[4],i=0,max=0,j=0,temp=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    
    max=a[0]+a[1]+a[2]+a[3];
    printf("%d ",max);
    max=0;  
    max=a[4]+a[1]+a[2]+a[3];
    printf("%d",max);
   
}   
