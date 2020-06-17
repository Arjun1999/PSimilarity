#include<stdio.h>
int main()
{   int a[5],s[5]={0,0,0,0,0},max=0,min=0;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
     
    }   
    for(int i=0;i<5;i++)
     {
         for(int j=0;j<5;j++)
         {
             if(j==i)
             continue;
             else
              s[i]=s[i]+a[j];
             
         }
     }
     max=s[0];
     min=s[1];
     for(int i=0;i<5;i++)
     {
         if(s[i]>max)
          max=s[i];

        
     }
     for(int i=0;i<5;i++)
       {
          if(s[i]<min)
            min=s[i];
        
       }
     printf(" %d  %d",min,max);
}
