#include<stdio.h>

int main()
{
 int arr[100],n,i,sum=0;

 //printf("enter the size of the array");
 scanf("%d",&n);
// printf("enter the elements to array");
 for(i=0;i<n;i++)
 {
 scanf("%d",&arr[i]);
 }
 for(i=0;i<n;i++)
 {
 //printf("the elements are:%d",arr[i]);
 }
 for(i=0;i<n;i++)
 {
 sum=sum+arr[i];
 }
 printf("%d",sum);

 return(1);
   }


