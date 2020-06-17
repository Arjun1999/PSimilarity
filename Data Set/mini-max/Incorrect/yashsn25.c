#include<stdio.h>
#include<stdlib.h>

void miniMaxSum(int a[5])
{
   int SUM[5],i,j,max,min;
   int Sum=0;
    for(i=0;i<5;i++)
    {
        Sum=Sum+a[i];
    }
    
    for(i=0;i<5;i++)
    {
        SUM[i]=Sum-a[i];
        
    }
    
    max=0;
    min=99999;
    
    for(i=0;i<5;i++)
    {
        if(SUM[i]>max)
            max=SUM[i];
    }
    for(i=0;i<5;i++)
    {
        if(SUM[i]<min)
            min=SUM[i];
    }    
    
  printf("%d %d",min,max);
    
}

int main()
{
   int a[5],i;
    
    
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);    
    }
     
   miniMaxSum(a[5]);
    
  return 0;  
}