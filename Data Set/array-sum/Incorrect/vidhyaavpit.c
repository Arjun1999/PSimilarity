#include<stdio.h>
int main()
{
     int a[5],i,sum=0;
     printf("enter the elements in array");
     for(i=0;i<=5;i++)
     {
         scanf("%d",a[i]);
     }
     printf("the sum of n numbers are");
     for(i=0;i<=5;i++)
     {
         sum=sum+a[i];
     }
     printf("the sum of integer is %d",sum)
}
